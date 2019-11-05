/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_component;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_component;
    QPushButton *pushButton_search_component;
    QPushButton *pushButton_store_component;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_search_Id;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *comboBox_search_Item_Number;
    QPushButton *pushButton_SearchBy;
    QGroupBox *groupBox_filtre;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QWidget *page2;
    QWidget *page3;
    QWidget *page4;
    QWidget *page5;
    QWidget *page6;
    QWidget *page7;
    QWidget *page8;
    QWidget *page9;
    QWidget *page10;
    QWidget *page11;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(684, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_component = new QGroupBox(centralWidget);
        groupBox_component->setObjectName(QStringLiteral("groupBox_component"));
        gridLayout_2 = new QGridLayout(groupBox_component);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(groupBox_component);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_component = new QComboBox(groupBox_2);
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->addItem(QString());
        comboBox_component->setObjectName(QStringLiteral("comboBox_component"));
        comboBox_component->setMinimumSize(QSize(120, 25));

        horizontalLayout->addWidget(comboBox_component);

        pushButton_search_component = new QPushButton(groupBox_2);
        pushButton_search_component->setObjectName(QStringLiteral("pushButton_search_component"));
        pushButton_search_component->setEnabled(true);
        pushButton_search_component->setMinimumSize(QSize(80, 25));

        horizontalLayout->addWidget(pushButton_search_component);

        pushButton_store_component = new QPushButton(groupBox_2);
        pushButton_store_component->setObjectName(QStringLiteral("pushButton_store_component"));
        pushButton_store_component->setMinimumSize(QSize(80, 25));

        horizontalLayout->addWidget(pushButton_store_component);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_component);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit_search_Id = new QLineEdit(groupBox_3);
        lineEdit_search_Id->setObjectName(QStringLiteral("lineEdit_search_Id"));
        lineEdit_search_Id->setMinimumSize(QSize(60, 25));
        lineEdit_search_Id->setMaximumSize(QSize(60, 25));

        horizontalLayout_4->addWidget(lineEdit_search_Id);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        comboBox_search_Item_Number = new QComboBox(groupBox_3);
        comboBox_search_Item_Number->setObjectName(QStringLiteral("comboBox_search_Item_Number"));
        comboBox_search_Item_Number->setMinimumSize(QSize(60, 25));
        comboBox_search_Item_Number->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(comboBox_search_Item_Number);

        pushButton_SearchBy = new QPushButton(groupBox_3);
        pushButton_SearchBy->setObjectName(QStringLiteral("pushButton_SearchBy"));
        pushButton_SearchBy->setMinimumSize(QSize(60, 25));
        pushButton_SearchBy->setMaximumSize(QSize(60, 25));

        horizontalLayout_4->addWidget(pushButton_SearchBy);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_component);

        groupBox_filtre = new QGroupBox(centralWidget);
        groupBox_filtre->setObjectName(QStringLiteral("groupBox_filtre"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_filtre);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(groupBox_filtre);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QStringLiteral("page5"));
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName(QStringLiteral("page6"));
        stackedWidget->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName(QStringLiteral("page7"));
        stackedWidget->addWidget(page7);
        page8 = new QWidget();
        page8->setObjectName(QStringLiteral("page8"));
        stackedWidget->addWidget(page8);
        page9 = new QWidget();
        page9->setObjectName(QStringLiteral("page9"));
        stackedWidget->addWidget(page9);
        page10 = new QWidget();
        page10->setObjectName(QStringLiteral("page10"));
        stackedWidget->addWidget(page10);
        page11 = new QWidget();
        page11->setObjectName(QStringLiteral("page11"));
        stackedWidget->addWidget(page11);

        horizontalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(groupBox_filtre);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMinimumSize(QSize(0, 300));
        tableView->setTabletTracking(false);
        tableView->setAutoFillBackground(false);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setAutoScroll(false);
        tableView->setTabKeyNavigation(true);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::CustomDashLine);
        tableView->setSortingEnabled(false);
        tableView->setWordWrap(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(80);
        tableView->horizontalHeader()->setMinimumSectionSize(80);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_3->addWidget(tableView);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 684, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion de Stock: GDS19_V3 - 27/10/2019", nullptr));
        groupBox_component->setTitle(QApplication::translate("MainWindow", "Component", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Parts Search / Store", nullptr));
        comboBox_component->setItemText(0, QApplication::translate("MainWindow", "Choose", nullptr));
        comboBox_component->setItemText(1, QApplication::translate("MainWindow", "Capacitor", nullptr));
        comboBox_component->setItemText(2, QApplication::translate("MainWindow", "Connector", nullptr));
        comboBox_component->setItemText(3, QApplication::translate("MainWindow", "Diode", nullptr));
        comboBox_component->setItemText(4, QApplication::translate("MainWindow", "Inductor", nullptr));
        comboBox_component->setItemText(5, QApplication::translate("MainWindow", "Integrated Circuit", nullptr));
        comboBox_component->setItemText(6, QApplication::translate("MainWindow", "Led", nullptr));
        comboBox_component->setItemText(7, QApplication::translate("MainWindow", "Quartz", nullptr));
        comboBox_component->setItemText(8, QApplication::translate("MainWindow", "Relay", nullptr));
        comboBox_component->setItemText(9, QApplication::translate("MainWindow", "Resistor", nullptr));
        comboBox_component->setItemText(10, QApplication::translate("MainWindow", "Transistor", nullptr));

        pushButton_search_component->setText(QApplication::translate("MainWindow", "Search", nullptr));
        pushButton_store_component->setText(QApplication::translate("MainWindow", "Store", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Search by Id or Item Number", nullptr));
        label->setText(QApplication::translate("MainWindow", "Id", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "I/ N", nullptr));
        pushButton_SearchBy->setText(QApplication::translate("MainWindow", "Search", nullptr));
        groupBox_filtre->setTitle(QApplication::translate("MainWindow", "Filter", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
