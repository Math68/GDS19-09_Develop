// 31/05/2019
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QtSql>
#include <dataBase.h>
#include <QSqlQuery>

#include "form_filter.h"
#include "dialog_store_windows.h"
#include "dialog_parts_id_update.h"
#include "dialog_parts_id_delete.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Dialog_parts_id_update *Window_parts_id_update;
    Dialog_parts_id_delete *Window_parts_id_delete;

    Form_filter *capacitorfilter;
    Form_filter *connectorfilter;
    Form_filter *diodefilter;
    Form_filter *inductorfilter;
    Form_filter *integratedcircuitfilter;
    Form_filter *ledfilter;
    Form_filter *quartzfilter;
    Form_filter *relayfilter;
    Form_filter *resistorfilter;
    Form_filter *transistorfilter;

    Ui::MainWindow *ui;
    QVBoxLayout *choose_filter_layout=nullptr;
    QVBoxLayout *capacitor_filter_layout=nullptr;
    QVBoxLayout *connector_filter_layout=nullptr;
    QVBoxLayout *diode_filter_layout=nullptr;
    QVBoxLayout *inductor_filter_layout=nullptr;
    QVBoxLayout *integrated_circuit_filter_layout=nullptr;
    QVBoxLayout *led_filter_layout=nullptr;
    QVBoxLayout *quartz_filter_layout=nullptr;
    QVBoxLayout *relay_filter_layout=nullptr;
    QVBoxLayout *resistor_filter_layout=nullptr;
    QVBoxLayout *transistor_filter_layout=nullptr;

    QSqlQuery *qry;
    QSqlQueryModel *model;

    QString ColumnName,PartIdNumber, CellData;

    DataBase GDS19_DataBase;

    QString CapacitorTable = "SELECT Parts_id, Value, Quantity, Voltage, Tolerance, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Capacitor' AND Value != '' ORDER BY Value";
    QString ConnectorTable = "SELECT Parts_id, Reference, Quantity, Contacts, Spacing, Description, Supplier, Item_number FROM Parts WHERE Component='Connector' AND Reference != '' ORDER BY Reference";
    QString DiodeTable = "SELECT Parts_id, Reference, Quantity, Type, Power, Voltage, Current, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Diode' AND Reference != '' ORDER BY Reference";
    QString InductorTable = "SELECT Parts_id, Value, Quantity, Mounting, Package, Current, Tolerance, Supplier, Item_number FROM Parts WHERE Component='Inductor' AND Value != '' ORDER BY Value";
    QString IntegratedCircuitsTable = "SELECT Parts_id, Reference, Quantity, Type, Description, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Integrated Circuit' AND Reference != '' ORDER BY Reference";
    QString LedTable = "SELECT Parts_id, Reference, Quantity, Mounting, Package, Color, Diameter, Supplier, Item_number FROM Parts WHERE Component='Led' AND Reference != '' ORDER BY Reference";
    QString QuartzTable = "SELECT Parts_id, Value, Quantity, Mounting, Package, Supplier, Item_number FROM Parts WHERE Component='Quartz' AND Value != '' ORDER BY Value";
    QString RelayTable ="SELECT Parts_id, Reference, Quantity, Mounting, Package, Voltage, Current, Configuration, Supplier, Item_number FROM Parts WHERE Component='Relay' AND Reference != '' ORDER BY Reference";
    QString ResistorTable = "SELECT Parts_id, Value, Quantity, Power, Tolerance, Package, Mounting, Supplier, Item_number FROM Parts WHERE component='Resistor' AND Value != '' ORDER BY Value";
    QString TransistorTable = "SELECT Parts_id, Reference, Quantity, Type, Voltage, Current, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Transistor' AND Reference != '' ORDER BY Reference";

    QString SearchCapacitorbyItemNumber = "SELECT Parts_id, Component, Value, Quantity, Voltage, Tolerance, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Capacitor' AND Item_number='%1'";
    QString SearchConnectorbyItemNumber = "SELECT Parts_id, Component, Reference, Quantity, Contacts, Spacing, Description, Supplier, Item_number FROM Parts WHERE Component='Connector' AND Item_number='%1'";
    QString SearchDiodebyItemNumber = "SELECT Parts_id, Component, Reference, Quantity, Type, Power, Voltage, Current, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Diode' AND Item_number='%1'";
    QString SearchInductorbyItemNumber = "SELECT Parts_id, Component, Value, Quantity, Mounting, Package, Current, Tolerance, Supplier, Item_number FROM Parts WHERE Component='Inductor' AND Item_number='%1'";
    QString SearchIntegratedCircuitsbyItemNumber = "SELECT Parts_id, Component, Reference, Quantity, Type, Description, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Integrated Circuit' AND Item_number='%1'";
    QString SearchLedbyItemNumber = "SELECT Parts_id, Component, Reference, Quantity, Mounting, Package, Color, Diameter, Supplier, Item_number FROM Parts WHERE Component='Led' AND Item_number='%1'";
    QString SearchQuartzbyItemNumber = "SELECT Parts_id, Component, Value, Quantity, Mounting, Package, Supplier, Item_number FROM Parts WHERE Component='Quartz' AND Item_number='%1'";
    QString SearchRelaybyItemNumber ="SELECT Parts_id, Component, Reference, Quantity, Mounting, Package, Voltage, Current, Configuration, Supplier, Item_number FROM Parts WHERE Component='Relay' AND Item_number='%1'";
    QString SearchResistorbyItemNumber = "SELECT Parts_id, Component, Value, Quantity, Power, Tolerance, Package, Mounting, Supplier, Item_number FROM Parts WHERE component='Resistor' AND Item_number='%1'";
    QString SearchTransistorbyItemNumber = "SELECT Parts_id, Component, Reference, Quantity, Type, Voltage, Current, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Transistor' AND Item_number='%1'";

    QString SearchCapacitorbyPartId = "SELECT Parts_id, Component, Value, Quantity, Voltage, Tolerance, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Capacitor' AND Parts_id='%1'";
    QString SearchConnectorbyPartId = "SELECT Parts_id, Component, Reference, Quantity, Contacts, Spacing, Description, Supplier, Item_number FROM Parts WHERE Component='Connector' AND Parts_id='%1'";
    QString SearchDiodebyPartId = "SELECT Parts_id, Component, Reference, Quantity, Type, Power, Voltage, Current, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Diode' AND Parts_id='%1'";
    QString SearchInductorbyPartId = "SELECT Parts_id, Component, Value, Quantity, Mounting, Package, Current, Tolerance, Supplier, Item_number FROM Parts WHERE Component='Inductor' AND Parts_id='%1'";
    QString SearchIntegratedCircuitbyPartId = "SELECT Parts_id, Component, Reference, Quantity, Type, Description, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Integrated Circuit' AND Parts_id='%1'";
    QString SearchLedbyPartId = "SELECT Parts_id, Component, Reference, Quantity, Mounting, Package, Color, Diameter, Supplier, Item_number FROM Parts WHERE Component='Led' AND Parts_id='%1'";
    QString SearchQuartzbyPartId = "SELECT Parts_id, Component, Value, Quantity, Mounting, Package, Supplier, Item_number FROM Parts WHERE Component='Quartz' AND Parts_id='%1'";
    QString SearchRelaybyPartId ="SELECT Parts_id, Component, Reference, Quantity, Mounting, Package, Voltage, Current, Configuration, Supplier, Item_number FROM Parts WHERE Component='Relay' AND Parts_id='%1'";
    QString SearchResistorbyPartId = "SELECT Parts_id, Component, Value, Quantity, Power, Tolerance, Package, Mounting, Supplier, Item_number FROM Parts WHERE component='Resistor' AND Parts_id='%1'";
    QString SearchTransistorbyPartId = "SELECT Parts_id, Component, Reference, Quantity, Type, Voltage, Current, Package, Mounting, Supplier, Item_number FROM Parts WHERE Component='Transistor' AND Parts_id='%1'";


public slots:
    void on_pushButton_search_component_clicked();
    void on_pushButton_store_component_clicked();

    void onRefreshTable(QString dataToRefresh);
    void displayTable(QString data);

    void on_tableView_doubleClicked(const QModelIndex &index);

    void DataBaseUpdate(QString NewCellValue);
    void DataBaseDeleteRow();

signals:
    void notify_parts_id_to_update(QString ColumnName, QString CellData, QString PartIdNumber);
    void notify_parts_id_to_delete(QString CellData);
private slots:
    void on_pushButton_SearchBy_clicked();
};

#endif // MAINWINDOW_H
