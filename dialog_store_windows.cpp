// Last update 24/10/2019

// 25/10/19 Led Part Updatet

#include "dialog_store_windows.h"
#include "ui_dialog_store_windows.h"
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QDebug>

Dialog_store_windows::Dialog_store_windows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_store_windows)
{
    ui->setupUi(this);

    QSqlDatabase::database();

    QSqlQueryModel *model1=new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.exec("SELECT DISTINCT Mounting FROM parts WHERE Mounting != 'NULL' ORDER BY Mounting");
    model1->setQuery(qry1);
    ui->comboBox_store_mounting->setModel(model1);

    QSqlQueryModel *model2=new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.exec("SELECT DISTINCT Supplier FROM Parts WHERE Supplier != 'NULL' ORDER BY Supplier"); // was prepare
    model2->setQuery(qry2);
    ui->comboBox_store_supplier->setModel(model2);
}

Dialog_store_windows::~Dialog_store_windows()
{
    delete ui;
}




void Dialog_store_windows::set_capacitor_store_window()
{
    SelectedComponent=Capacitor;

    this->setWindowTitle("Store Capacitor");

    Combobox_store_voltage = new QComboBox;
    Combobox_store_voltage->setEditable(1);

    Combobox_store_tolerance = new QComboBox;
    Combobox_store_tolerance->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_voltage,2,0);
    ui->gridLayout_store->addWidget(Combobox_store_voltage,2,1);
    ui->gridLayout_store->addWidget(Label_store_tolerance,2,3);
    ui->gridLayout_store->addWidget(Combobox_store_tolerance,2,4);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Voltage FROM Parts WHERE Component='Capacitor' ORDER BY Voltage"); //SELECT DISTINCT Voltage from Parts WHERE Voltage!='NULL' order by Voltage  //select distinct Voltage from Combobox_Voltage where Voltage!='NULL' order by Voltage");
    qry1.exec();
    model1->setQuery(qry1);
    Combobox_store_voltage->setModel(model1);

    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Tolerance FROM Parts WHERE Component='Capacitor' ORDER BY Tolerance");
    qry2.exec();
    model2->setQuery(qry2);
    Combobox_store_tolerance->setModel(model2);

    QSqlQueryModel *model3=new QSqlQueryModel();
    QSqlQuery qry3;
    qry3.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Capacitor' ORDER BY Package");
    qry3.exec();
    model3->setQuery(qry3);
    ui->comboBox_store_package->setModel(model3);
}

void Dialog_store_windows::set_connector_store_window()
{
     SelectedComponent=Connector;

    this->setWindowTitle("Store Connector");

    delete ui->label_store_value;
    delete ui->label_store_mounting;
    delete ui->label_store_package;
    delete ui->comboBox_store_package;
    delete ui->comboBox_store_mounting;

    Lineedit_store_description = new QLineEdit;
    Lineedit_store_contacts = new QLineEdit;
    Lineedit_store_spacing = new QLineEdit;

    ui->gridLayout_store->addWidget(Label_store_reference,0,0);
    ui->gridLayout_store->addWidget(Label_store_contacts,1,0);
    ui->gridLayout_store->addWidget(Lineedit_store_contacts,1,1);
    ui->gridLayout_store->addWidget(Label_store_spacing,1,3);
    ui->gridLayout_store->addWidget(Lineedit_store_spacing,1,4);
    ui->gridLayout_store->addWidget(Label_store_description,2,0);
    ui->gridLayout_store->addWidget(Lineedit_store_description,2,1,1,4);
}

void Dialog_store_windows::set_diode_store_window()
{
    SelectedComponent=Diode;

    this->setWindowTitle("Store Diode");

    delete ui->label_store_value;

    ComboBox_store_type = new QComboBox;
    ComboBox_store_type->setEditable(1);
    Combobox_store_voltage = new QComboBox;
    Combobox_store_voltage->setEditable(1);
    Combobox_store_current = new QComboBox;
    Combobox_store_current->setEditable(1);
    Combobox_store_power = new QComboBox;
    Combobox_store_power->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_reference,0,0);
    ui->gridLayout_store->addWidget(Label_store_type,2,0);
    ui->gridLayout_store->addWidget(ComboBox_store_type,2,1);
    ui->gridLayout_store->addWidget(Label_store_power,2,3);
    ui->gridLayout_store->addWidget(Combobox_store_power,2,4);
    ui->gridLayout_store->addWidget(Label_store_voltage,3,0);
    ui->gridLayout_store->addWidget(Combobox_store_voltage,3,1);
    ui->gridLayout_store->addWidget(Label_store_current,3,3);
    ui->gridLayout_store->addWidget(Combobox_store_current,3,4);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Voltage FROM Parts WHERE Component='Diode' ORDER by Voltage");
    qry1.exec();
    model1->setQuery(qry1);
    Combobox_store_voltage->setModel(model1);

    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Current FROM Parts WHERE (Component='Diode' AND Current != 'NULL') ORDER by Current");
    qry2.exec();
    model2->setQuery(qry2);
    Combobox_store_current->setModel(model2);

    QSqlQueryModel *model3=new QSqlQueryModel();
    QSqlQuery qry3;
    qry3.prepare("SELECT DISTINCT Type FROM Parts WHERE Component='Diode' ORDER by Type");
    qry3.exec();
    model3->setQuery(qry3);
    ComboBox_store_type->setModel(model3);

    QSqlQueryModel *model4 = new QSqlQueryModel();
    QSqlQuery qry4;
    qry4.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Diode' ORDER by Package");
    qry4.exec();
    model4->setQuery(qry4);
    ui->comboBox_store_package->setModel(model4);

    QSqlQueryModel *model5 = new QSqlQueryModel();
    QSqlQuery qry5;
    qry5.prepare("SELECT DISTINCT Power FROM Parts WHERE (Component='Diode' AND Power != 'NULL') ORDER by Power");
    qry5.exec();
    model5->setQuery(qry5);
    Combobox_store_power->setModel(model5);
}

void Dialog_store_windows::set_inductor_store_window()
{
    SelectedComponent=Inductor;

    this->setWindowTitle("Store Inductor");

    Combobox_store_tolerance = new QComboBox;
    Combobox_store_tolerance->setEditable(1);
    Combobox_store_current = new QComboBox;
    Combobox_store_current->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_current,2,0);
    ui->gridLayout_store->addWidget(Combobox_store_current,2,1);
    ui->gridLayout_store->addWidget(Label_store_tolerance,2,3);
    ui->gridLayout_store->addWidget(Combobox_store_tolerance,2,4);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Tolerance FROM Parts WHERE Component='Inductor' ORDER by Tolerance");
    qry1.exec();
    model1->setQuery(qry1);
    Combobox_store_tolerance->setModel(model1);

    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Current FROM Parts WHERE Component='Inductor' ORDER by Current");
    qry2.exec();
    model2->setQuery(qry2);
    Combobox_store_current->setModel(model2);

    QSqlQueryModel *model3 = new QSqlQueryModel();
    QSqlQuery qry3;
    qry3.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Inductor' ORDER by Package");
    qry3.exec();
    model3->setQuery(qry3);
    ui->comboBox_store_package->setModel(model3);
}

void Dialog_store_windows::set_integrated_circuit_store_window()
{
     SelectedComponent=IntegratedCircuit;

    this->setWindowTitle("Store Integrated Circuit");

    delete ui->label_store_value;
    Lineedit_store_description = new QLineEdit();

    ComboBox_store_type = new QComboBox;
    ComboBox_store_type->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_reference,0,0);
    ui->gridLayout_store->addWidget(Label_store_type,2,0);
    ui->gridLayout_store->addWidget(ComboBox_store_type,2,1);
    ui->gridLayout_store->addWidget(Label_store_description,3,0);
    ui->gridLayout_store->addWidget(Lineedit_store_description,3,1,1,4);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Integrated Circuit' ORDER BY Package");
    qry.exec();
    model->setQuery(qry);
    ui->comboBox_store_package->setModel(model);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Type FROM Parts WHERE Component='Integrated Circuit' ORDER BY Type"); //select distinct Integrated_Circuit from Combobox_Type where Integrated_Circuit!='NULL' order by Integrated_Circuit ");
    qry1.exec();
    model1->setQuery(qry1);
    ComboBox_store_type->setModel(model1);
}

void Dialog_store_windows::set_led_store_window()
{
    SelectedComponent=Led;

    this->setWindowTitle("Store Led");

    delete ui->label_store_value;
    Combobox_store_color = new QComboBox;
    Combobox_store_color->setEditable(1);
    Combobox_store_diameter = new QComboBox;
    Combobox_store_diameter->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_reference,0,0);
    ui->gridLayout_store->addWidget(Label_store_color,2,0);
    ui->gridLayout_store->addWidget(Combobox_store_color,2,1);
    ui->gridLayout_store->addWidget(Label_store_diameter,2,3);
    ui->gridLayout_store->addWidget(Combobox_store_diameter,2,4);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Led' ORDER BY Package");
    qry.exec();
    model->setQuery(qry);
    ui->comboBox_store_package->setModel(model);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Color FROM Parts WHERE Component='Led' ORDER BY Color");
    qry1.exec();
    model1->setQuery(qry1);
    Combobox_store_color->setModel(model1);

    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Diameter FROM Parts WHERE Component='Led' ORDER BY Diameter");
    qry2.exec();
    model2->setQuery(qry2);
    Combobox_store_diameter->setModel(model2);
}

void Dialog_store_windows::set_quartz_store_window()
{
    SelectedComponent=Quartz;

    this->setWindowTitle("Store Quartz");

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Quartz' ORDER BY Package");
    qry.exec();
    model->setQuery(qry);
    ui->comboBox_store_package->setModel(model);
}

void Dialog_store_windows::set_relay_store_window()
{
    SelectedComponent=Relay;

    this->setWindowTitle("Store Relay");

    delete ui->label_store_value;

    Combobox_store_voltage = new QComboBox;
    Combobox_store_voltage->setEditable(1);
    Combobox_store_current = new QComboBox;
    Combobox_store_current->setEditable(1);
    Combobox_store_configuration = new QComboBox;
    Combobox_store_configuration->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_reference,0,0);
    ui->gridLayout_store->addWidget(Label_store_voltage,2,0);
    ui->gridLayout_store->addWidget(Combobox_store_voltage,2,1);
    ui->gridLayout_store->addWidget(Label_store_current,2,3);
    ui->gridLayout_store->addWidget(Combobox_store_current,2,4);
    ui->gridLayout_store->addWidget(Label_store_configuration,3,0);
    ui->gridLayout_store->addWidget(Combobox_store_configuration,3,1);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Relay' ORDER BY Package");
    qry.exec();
    model->setQuery(qry);
    ui->comboBox_store_package->setModel(model);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Voltage FROM Parts WHERE Component='Relay' ORDER BY Voltage");
    qry1.exec();
    model1->setQuery(qry1);
    Combobox_store_voltage->setModel(model1);

    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Current FROM Parts WHERE Component='Relay' ORDER BY Current");
    qry2.exec();
    model2->setQuery(qry2);
    Combobox_store_current->setModel(model2);

    QSqlQueryModel *model3 = new QSqlQueryModel();
    QSqlQuery qry3;
    qry3.prepare("SELECT DISTINCT Configuration FROM Parts WHERE Component='Relay' ORDER BY Configuration");
    qry3.exec();
    model3->setQuery(qry3);
    Combobox_store_configuration->setModel(model3);
}

void Dialog_store_windows::set_resistor_store_window()
{
    SelectedComponent=Resistor;

    this->setWindowTitle("Store Resistor");

    Combobox_store_power = new QComboBox;
    Combobox_store_power->setEditable(1);
    Combobox_store_tolerance = new QComboBox;
    Combobox_store_tolerance->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_power,2,0);
    ui->gridLayout_store->addWidget(Combobox_store_power,2,1);
    ui->gridLayout_store->addWidget(Label_store_tolerance,2,3);
    ui->gridLayout_store->addWidget(Combobox_store_tolerance,2,4);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Resistor' ORDER by Package");
    qry.exec();
    model->setQuery(qry);
    ui->comboBox_store_package->setModel(model);

    QSqlQueryModel *model1 = new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Power FROM Parts WHERE Component='Resistor' ORDER by Power");
    qry1.exec();
    model1->setQuery(qry1);
    Combobox_store_power->setModel(model1);

    QSqlQueryModel *model2 = new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Tolerance FROM Parts WHERE Component='Resistor' ORDER by Tolerance");
    qry2.exec();
    model2->setQuery(qry2);
    Combobox_store_tolerance->setModel(model2);
}

void Dialog_store_windows::set_transistor_store_window()
{
    SelectedComponent=Transistor;

    this->setWindowTitle("Store Transistor");

    delete ui->label_store_value;
    ComboBox_store_type = new QComboBox;
    ComboBox_store_type->setEditable(1);
    Combobox_store_voltage = new QComboBox;
    Combobox_store_voltage->setEditable(1);
    Combobox_store_current = new QComboBox;
    Combobox_store_current->setEditable(1);

    ui->gridLayout_store->addWidget(Label_store_reference,0,0);
    ui->gridLayout_store->addWidget(Label_store_type,2,0);
    ui->gridLayout_store->addWidget(ComboBox_store_type,2,1);
    ui->gridLayout_store->addWidget(Label_store_voltage,3,0);
    ui->gridLayout_store->addWidget(Combobox_store_voltage,3,1);
    ui->gridLayout_store->addWidget(Label_store_current,3,3);
    ui->gridLayout_store->addWidget(Combobox_store_current,3,4);

    QSqlQueryModel *model1=new QSqlQueryModel();
    QSqlQuery qry1;
    qry1.prepare("SELECT DISTINCT Package FROM Parts WHERE Component='Transistor' ORDER BY Package");
    qry1.exec();
    model1->setQuery(qry1);
    ui->comboBox_store_package->setModel(model1);

    QSqlQueryModel *model2=new QSqlQueryModel();
    QSqlQuery qry2;
    qry2.prepare("SELECT DISTINCT Type FROM Parts WHERE Component='Transistor' ORDER BY Type");
    qry2.exec();
    model2->setQuery(qry2);
    ComboBox_store_type->setModel(model2);

    QSqlQueryModel *model3=new QSqlQueryModel();
    QSqlQuery qry3;
    qry3.prepare("SELECT DISTINCT Voltage FROM Parts WHERE Component='Transistor' ORDER BY Voltage");
    qry3.exec();
    model3->setQuery(qry3);
    Combobox_store_voltage->setModel(model3);

    QSqlQueryModel *model4=new QSqlQueryModel();
    QSqlQuery qry4;
    qry4.prepare("SELECT DISTINCT Current FROM Parts WHERE Component='Transistor' ORDER BY Current");
    qry4.exec();
    model4->setQuery(qry4);
    Combobox_store_current->setModel(model4);
}


void Dialog_store_windows::on_pushButton_store_save_clicked()
{

    if(SelectedComponent==Capacitor)
    {
        //QMessageBox::warning(this,tr(" "),tr("Capacitor is selected !!!"));
         save_capacitor();
    }
    else if(SelectedComponent==Connector)
    {
         //QMessageBox::warning(this,tr(" "),tr("Connector is selected !!!"));
         save_connector();
    }
    else if(SelectedComponent==Diode)
    {
         save_diode();
    }
    else if(SelectedComponent==Inductor)
    {
        save_inductor();
    }
    else if(SelectedComponent==IntegratedCircuit)
    {
        save_integrated_circuit();
    }
    else if(SelectedComponent==Led)
    {
        save_led();
    }
    else if(SelectedComponent==Quartz)
    {
        save_quartz();
    }
    else if(SelectedComponent==Relay)
    {
        save_relay();
    }
    else if(SelectedComponent==Resistor)
    {
        save_resistor();
    }
    else if(SelectedComponent==Transistor)
    {
        save_transistor();
    }

    notify_component_has_been_saved();

    close();
}


void Dialog_store_windows::on_pushButton_store_cancel_clicked()
{
    close();
}

void Dialog_store_windows::save_capacitor()
{
  QSqlQuery query;
    query.exec("insert into Parts (Component, Value, Quantity, Mounting, Package, Tolerance, Supplier, Item_number, Voltage)"
               " values('Capacitor','"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+Combobox_store_tolerance->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"',"
               "  '"+Combobox_store_voltage->currentText()+"')");
}

void Dialog_store_windows::save_connector()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Reference, Quantity, Contacts, Spacing, Description, Supplier, Item_number)"
               " values('Connector','"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+Lineedit_store_contacts->text()+"',"
               "'"+Lineedit_store_spacing->text()+"',"
               "'"+Lineedit_store_description->text()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_diode()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Reference, Quantity, Mounting, Package, Type, Voltage, Current, Supplier, Item_number)"
               " values('Diode',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+ComboBox_store_type->currentText()+"',"
               "'"+Combobox_store_voltage->currentText()+"',"
               "'"+Combobox_store_current->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_inductor()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Value, Quantity, Mounting, Package, Tolerance, Current, Supplier, Item_number)"
               " values('Inductor',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+Combobox_store_tolerance->currentText()+"',"
               "'"+Combobox_store_current->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_integrated_circuit()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Reference, Type, Quantity, Mounting, Package, Description, Supplier, Item_number)"
               " values('Integrated Circuit',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ComboBox_store_type->currentText()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+Lineedit_store_description->text()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_led()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Reference, Quantity, Mounting, Package, Color, Diameter, Supplier, Item_number)"
               " values('Led',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+Combobox_store_color->currentText()+"',"
               "'"+Combobox_store_diameter->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_quartz()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Value, Quantity, Mounting, Package, Supplier, Item_number)"
               " values('Quartz',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_relay()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Reference, Quantity, Mounting, Package, Voltage, Current, Configuration, Supplier, Item_number)"
               " values('Relay',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+Combobox_store_voltage->currentText()+"',"
               "'"+Combobox_store_current->currentText()+"',"
               "'"+Combobox_store_configuration->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_resistor()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Value, Quantity, Mounting, Package, Power, Tolerance, Supplier, Item_number)"
               " values('Resistor',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+Combobox_store_power->currentText()+"',"
               "'"+Combobox_store_tolerance->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"')");
}

void Dialog_store_windows::save_transistor()
{
    QSqlQuery query;
    query.exec("insert into Parts (Component, Reference, Quantity, Mounting, Package, Type, Supplier, Item_number, Voltage, Current)"
               " values('Transistor',"
               "'"+ui->lineEdit_store_value->text()+"',"
               "'"+ui->lineEdit_store_quantity->text()+"',"
               "'"+ui->comboBox_store_mounting->currentText()+"',"
               "'"+ui->comboBox_store_package->currentText()+"',"
               "'"+ComboBox_store_type->currentText()+"',"
               "'"+ui->comboBox_store_supplier->currentText()+"',"
               "'"+ui->lineEdit_store_item_number->text()+"',"

               "'"+Combobox_store_voltage->currentText()+"',"
               "'"+Combobox_store_current->currentText()+"')");
}
