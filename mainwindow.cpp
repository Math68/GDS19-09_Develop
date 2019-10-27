// 31/05/2019
#include <QMessageBox>
#include <QDialog>
#include <QSqlDatabase>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form_filter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    capacitorfilter = new Form_filter;  
    connectorfilter = new Form_filter;
    diodefilter = new Form_filter;
    inductorfilter = new Form_filter;
    integratedcircuitfilter = new Form_filter;
    ledfilter = new Form_filter;
    quartzfilter = new Form_filter;
    relayfilter = new Form_filter;
    resistorfilter = new Form_filter;
    transistorfilter = new Form_filter;

    //connect(capacitorfilter, SIGNAL(notifyRefreshTable(QString)) , this, SLOT(onRefreshCapacitorTable(QString)));
    connect(capacitorfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(connectorfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(diodefilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(inductorfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(integratedcircuitfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(ledfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(quartzfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(relayfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(resistorfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);
    connect(transistorfilter, &Form_filter::notifyRefreshTable, this, &MainWindow::onRefreshTable);

    Window_parts_id_update = new Dialog_parts_id_update;
    connect(this, &MainWindow::notify_parts_id_to_update, Window_parts_id_update, &Dialog_parts_id_update::display_parts_id_selected);
    connect(Window_parts_id_update, &Dialog_parts_id_update::notify_DatabaseToUpdate, this, &MainWindow::DataBaseUpdate );

    Window_parts_id_delete = new Dialog_parts_id_delete;
    connect(this, &MainWindow::notify_parts_id_to_delete, Window_parts_id_delete, &Dialog_parts_id_delete::display_parts_id_to_deleted);
    connect(Window_parts_id_delete, &Dialog_parts_id_delete::notify_DatabaseRowToDelete, this, &MainWindow::DataBaseDeleteRow);

    //Database connection
    if(!GDS19_DataBase.OpenConnection())
        QMessageBox::warning(this,tr(" "),tr("Database opening failed !!!"));
}

MainWindow::~MainWindow()
{
    GDS19_DataBase.CloseConnection();
    delete ui;
}

// *****************************************************
//
//  SEARCH
//
// *****************************************************

void MainWindow::on_pushButton_search_component_clicked()
{
    if(ui->comboBox_component->currentText()=="Choose") // page 1, indice 0
    {
        ui->stackedWidget->setCurrentIndex(0);
        choose_filter_layout = new QVBoxLayout;
        ui->page1->setLayout(choose_filter_layout);
        QMessageBox::warning(this,tr(" "),tr("Choose a component !!!"));
    }
    else if(ui->comboBox_component->currentText()=="Capacitor")  // page 2, indice 1
    {
        ui->stackedWidget->setCurrentIndex(1);
        capacitorfilter->set_capacitor_filter();
        capacitor_filter_layout = new QVBoxLayout;
        capacitor_filter_layout->addWidget(capacitorfilter);
        ui->groupBox_filtre->setLayout(capacitor_filter_layout);
        ui->page2->setLayout(capacitor_filter_layout);
        displayTable(CapacitorTable);
    }
    else if(ui->comboBox_component->currentText()=="Connector") // page 3, indice 2
    {
        ui->stackedWidget->setCurrentIndex(2);
        connectorfilter->set_connector_filter();
        connector_filter_layout = new QVBoxLayout;
        connector_filter_layout->addWidget(connectorfilter);
        ui->page3->setLayout(connector_filter_layout);
        displayTable(ConnectorTable);
    }
    else if(ui->comboBox_component->currentText()=="Diode") // page 4, indice 3
    {
        ui->stackedWidget->setCurrentIndex(3);
        diodefilter->set_diode_filter();
        diode_filter_layout = new QVBoxLayout;
        diode_filter_layout->addWidget(diodefilter);
        ui->page4->setLayout(diode_filter_layout);
        displayTable(DiodeTable);
    }
    else if(ui->comboBox_component->currentText()=="Inductor")  // page 5, indice 4
    {
        ui->stackedWidget->setCurrentIndex(4);
        inductorfilter->set_inductor_filter();
        inductor_filter_layout = new QVBoxLayout;
        inductor_filter_layout->addWidget(inductorfilter);
        ui->page5->setLayout(inductor_filter_layout);
        displayTable(InductorTable);
    }
    else if(ui->comboBox_component->currentText()=="Integrated Circuit")    // page 6, indice 5
    {
        ui->stackedWidget->setCurrentIndex(5);
        integratedcircuitfilter->set_integrated_circuit_filter();
        integrated_circuit_filter_layout = new QVBoxLayout;
        integrated_circuit_filter_layout->addWidget(integratedcircuitfilter);
        ui->page6->setLayout(integrated_circuit_filter_layout);
        displayTable(IntegratedCircuitsTable);
    }
    else if(ui->comboBox_component->currentText()=="Led")   // page 7, indice 6
    {
        ui->stackedWidget->setCurrentIndex(6);
        ledfilter->set_led_filter();
        led_filter_layout = new QVBoxLayout;
        led_filter_layout->addWidget(ledfilter);
        ui->page7->setLayout(led_filter_layout);
        displayTable(LedTable);
    }
    else if(ui->comboBox_component->currentText()=="Quartz")    // page 8, indice 7
    {
        ui->stackedWidget->setCurrentIndex(7);
        quartzfilter->set_quartz_filter();
        quartz_filter_layout = new QVBoxLayout;
        quartz_filter_layout->addWidget(quartzfilter);
        ui->page8->setLayout(quartz_filter_layout);
        displayTable(QuartzTable);
    }
    else if(ui->comboBox_component->currentText()=="Relay") // page 9, indice 8
    {
        ui->stackedWidget->setCurrentIndex(8);
        relayfilter->set_relay_filter();
        relay_filter_layout = new QVBoxLayout;
        relay_filter_layout->addWidget(relayfilter);
        ui->page9->setLayout(relay_filter_layout);
        displayTable(RelayTable);
    }
    else if(ui->comboBox_component->currentText()=="Resistor")  // page 10, indice 9
    {
        ui->stackedWidget->setCurrentIndex(9);
        resistorfilter->set_resistor_filter();
        resistor_filter_layout = new QVBoxLayout;
        resistor_filter_layout->addWidget(resistorfilter);
        ui->page10->setLayout(resistor_filter_layout);
        displayTable(ResistorTable);
    }
    else if(ui->comboBox_component->currentText()=="Transistor")    // page 11, indice 10
    {
        ui->stackedWidget->setCurrentIndex(10);
        transistorfilter->set_transistor_filter();
        transistor_filter_layout = new QVBoxLayout;
        transistor_filter_layout->addWidget(transistorfilter);
        ui->page11->setLayout(transistor_filter_layout);
        displayTable(TransistorTable);
    }
}

void MainWindow::displayTable(QString data)
{
    qry = new QSqlQuery;
    qry->exec(data);

    model = new QSqlQueryModel();
    model->setQuery(*qry);

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::onRefreshTable(QString dataToRefresh)
{
    displayTable(dataToRefresh);
}

// *****************************************************
//
//  STORE
//
// *****************************************************

void MainWindow::on_pushButton_store_component_clicked()
{
    if(ui->comboBox_component->currentText()=="Choose"){
        QMessageBox::warning(this,tr(" "),tr("Choose a component !!!"));
    }
    else{
        Dialog_store_windows store_window;
        connect(&store_window, &Dialog_store_windows::notify_component_has_been_saved, this, &MainWindow::on_pushButton_search_component_clicked);

        if(ui->comboBox_component->currentText()=="Capacitor")
        {
            //SelectedComponent=Capacitor;
            store_window.set_capacitor_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Connector")
        {
            //SelectedComponent=Connector;
            store_window.set_connector_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Diode")
        {
            //SelectedComponent=Diode;
            store_window.set_diode_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Inductor")
        {
            //SelectedComponent=Inductor;
            store_window.set_inductor_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Integrated Circuit")
        {
            //SelectedComponent=IntegratedCircuit;
            store_window.set_integrated_circuit_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Led")
        {
            //SelectedComponent=Led;
            store_window.set_led_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Quartz")
        {
            //SelectedComponent=Quartz;
            store_window.set_quartz_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Relay")
        {
            //SelectedComponent=Relay;
            store_window.set_relay_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Resistor")
        {
            //SelectedComponent=Resistor;
            store_window.set_resistor_store_window();
        }
        else if(ui->comboBox_component->currentText()=="Transistor")
        {
            //SelectedComponent=Transistor;
            store_window.set_transistor_store_window();
        }
        store_window.exec();
    }
}

//********************************************************
//
// Table view Update or delete...
//
// *******************************************************

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    ColumnName = model->record().fieldName(index.column());  // Recupère le nom de la colonne
    CellData = ui->tableView->model()->data(index).toString();  // Recupère le contenu de la cellule
    QModelIndex PartIdIndex = model->index(index.row(),0);  // crétion d'un index pour la colonne Parts_Id
    PartIdNumber = ui->tableView->model()->data(PartIdIndex).toString();  // Recupère le numéro de Parts_Id

    if(index.column()==0)
    {
        // Delete
        emit notify_parts_id_to_delete(PartIdNumber);
        Window_parts_id_delete->show();
    }
    else{
        // Update
        emit notify_parts_id_to_update(ColumnName, CellData, PartIdNumber);
        Window_parts_id_update->exec();
    }
}

void MainWindow::DataBaseUpdate(QString NewCellValue){
    QSqlQuery query;
    query.exec("UPDATE Parts SET '"+ColumnName+"'='"+NewCellValue+"' WHERE Parts_id='"+PartIdNumber+"' ");
    // Table has to be refresch
    on_pushButton_search_component_clicked();
}

void MainWindow::DataBaseDeleteRow(){
    QSqlQuery query;
    query.exec("DELETE FROM Parts WHERE Parts_id='"+PartIdNumber+"' ");
    // Table has to be refresch
    on_pushButton_search_component_clicked();
}