/********************************************************************************
** Form generated from reading UI file 'dialog_store_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STORE_WINDOWS_H
#define UI_DIALOG_STORE_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_store_windows
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_store;
    QLabel *label_store_value;
    QLineEdit *lineEdit_store_value;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_store_quantity;
    QLineEdit *lineEdit_store_quantity;
    QLabel *label_store_mounting;
    QComboBox *comboBox_store_mounting;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_store_package;
    QComboBox *comboBox_store_package;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_store_item_number;
    QLineEdit *lineEdit_store_item_number;
    QHBoxLayout *horizontalLayout;
    QLabel *label_store_supplier;
    QComboBox *comboBox_store_supplier;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_store_save;
    QPushButton *pushButton_store_cancel;

    void setupUi(QDialog *Dialog_store_windows)
    {
        if (Dialog_store_windows->objectName().isEmpty())
            Dialog_store_windows->setObjectName(QStringLiteral("Dialog_store_windows"));
        Dialog_store_windows->resize(512, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog_store_windows->sizePolicy().hasHeightForWidth());
        Dialog_store_windows->setSizePolicy(sizePolicy);
        Dialog_store_windows->setMinimumSize(QSize(80, 20));
        Dialog_store_windows->setBaseSize(QSize(80, 20));
        Dialog_store_windows->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(Dialog_store_windows);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_store = new QGridLayout();
        gridLayout_store->setObjectName(QStringLiteral("gridLayout_store"));
        gridLayout_store->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_store_value = new QLabel(Dialog_store_windows);
        label_store_value->setObjectName(QStringLiteral("label_store_value"));
        sizePolicy.setHeightForWidth(label_store_value->sizePolicy().hasHeightForWidth());
        label_store_value->setSizePolicy(sizePolicy);
        label_store_value->setMinimumSize(QSize(50, 20));
        label_store_value->setMaximumSize(QSize(50, 20));
        label_store_value->setBaseSize(QSize(50, 20));

        gridLayout_store->addWidget(label_store_value, 0, 0, 1, 1);

        lineEdit_store_value = new QLineEdit(Dialog_store_windows);
        lineEdit_store_value->setObjectName(QStringLiteral("lineEdit_store_value"));
        lineEdit_store_value->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_store_value->sizePolicy().hasHeightForWidth());
        lineEdit_store_value->setSizePolicy(sizePolicy);
        lineEdit_store_value->setMinimumSize(QSize(80, 20));
        lineEdit_store_value->setMaximumSize(QSize(80, 20));
        lineEdit_store_value->setBaseSize(QSize(80, 20));

        gridLayout_store->addWidget(lineEdit_store_value, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_store->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_store_quantity = new QLabel(Dialog_store_windows);
        label_store_quantity->setObjectName(QStringLiteral("label_store_quantity"));
        sizePolicy.setHeightForWidth(label_store_quantity->sizePolicy().hasHeightForWidth());
        label_store_quantity->setSizePolicy(sizePolicy);
        label_store_quantity->setMinimumSize(QSize(50, 20));
        label_store_quantity->setMaximumSize(QSize(50, 20));
        label_store_quantity->setBaseSize(QSize(50, 20));

        gridLayout_store->addWidget(label_store_quantity, 0, 3, 1, 1);

        lineEdit_store_quantity = new QLineEdit(Dialog_store_windows);
        lineEdit_store_quantity->setObjectName(QStringLiteral("lineEdit_store_quantity"));
        sizePolicy.setHeightForWidth(lineEdit_store_quantity->sizePolicy().hasHeightForWidth());
        lineEdit_store_quantity->setSizePolicy(sizePolicy);
        lineEdit_store_quantity->setMinimumSize(QSize(80, 20));
        lineEdit_store_quantity->setMaximumSize(QSize(80, 20));
        lineEdit_store_quantity->setBaseSize(QSize(80, 20));

        gridLayout_store->addWidget(lineEdit_store_quantity, 0, 4, 1, 1);

        label_store_mounting = new QLabel(Dialog_store_windows);
        label_store_mounting->setObjectName(QStringLiteral("label_store_mounting"));
        sizePolicy.setHeightForWidth(label_store_mounting->sizePolicy().hasHeightForWidth());
        label_store_mounting->setSizePolicy(sizePolicy);
        label_store_mounting->setMinimumSize(QSize(50, 20));
        label_store_mounting->setMaximumSize(QSize(50, 20));
        label_store_mounting->setBaseSize(QSize(50, 20));

        gridLayout_store->addWidget(label_store_mounting, 1, 0, 1, 1);

        comboBox_store_mounting = new QComboBox(Dialog_store_windows);
        comboBox_store_mounting->setObjectName(QStringLiteral("comboBox_store_mounting"));
        sizePolicy.setHeightForWidth(comboBox_store_mounting->sizePolicy().hasHeightForWidth());
        comboBox_store_mounting->setSizePolicy(sizePolicy);
        comboBox_store_mounting->setMinimumSize(QSize(80, 20));
        comboBox_store_mounting->setMaximumSize(QSize(80, 20));
        comboBox_store_mounting->setBaseSize(QSize(80, 20));
        comboBox_store_mounting->setEditable(true);

        gridLayout_store->addWidget(comboBox_store_mounting, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_store->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        label_store_package = new QLabel(Dialog_store_windows);
        label_store_package->setObjectName(QStringLiteral("label_store_package"));
        sizePolicy.setHeightForWidth(label_store_package->sizePolicy().hasHeightForWidth());
        label_store_package->setSizePolicy(sizePolicy);
        label_store_package->setMinimumSize(QSize(50, 20));
        label_store_package->setMaximumSize(QSize(50, 20));
        label_store_package->setBaseSize(QSize(50, 20));

        gridLayout_store->addWidget(label_store_package, 1, 3, 1, 1);

        comboBox_store_package = new QComboBox(Dialog_store_windows);
        comboBox_store_package->setObjectName(QStringLiteral("comboBox_store_package"));
        sizePolicy.setHeightForWidth(comboBox_store_package->sizePolicy().hasHeightForWidth());
        comboBox_store_package->setSizePolicy(sizePolicy);
        comboBox_store_package->setMinimumSize(QSize(80, 20));
        comboBox_store_package->setMaximumSize(QSize(80, 20));
        comboBox_store_package->setBaseSize(QSize(80, 20));
        comboBox_store_package->setEditable(true);

        gridLayout_store->addWidget(comboBox_store_package, 1, 4, 1, 1);

        gridLayout_store->setColumnMinimumWidth(0, 50);
        gridLayout_store->setColumnMinimumWidth(1, 80);
        gridLayout_store->setColumnMinimumWidth(2, 10);
        gridLayout_store->setColumnMinimumWidth(3, 50);
        gridLayout_store->setColumnMinimumWidth(4, 80);
        gridLayout_store->setRowMinimumHeight(0, 20);
        gridLayout_store->setRowMinimumHeight(1, 20);

        horizontalLayout_3->addLayout(gridLayout_store);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(18, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_store_item_number = new QLabel(Dialog_store_windows);
        label_store_item_number->setObjectName(QStringLiteral("label_store_item_number"));
        sizePolicy.setHeightForWidth(label_store_item_number->sizePolicy().hasHeightForWidth());
        label_store_item_number->setSizePolicy(sizePolicy);
        label_store_item_number->setMinimumSize(QSize(70, 20));
        label_store_item_number->setMaximumSize(QSize(70, 20));
        label_store_item_number->setBaseSize(QSize(70, 20));

        horizontalLayout_2->addWidget(label_store_item_number);

        lineEdit_store_item_number = new QLineEdit(Dialog_store_windows);
        lineEdit_store_item_number->setObjectName(QStringLiteral("lineEdit_store_item_number"));
        sizePolicy.setHeightForWidth(lineEdit_store_item_number->sizePolicy().hasHeightForWidth());
        lineEdit_store_item_number->setSizePolicy(sizePolicy);
        lineEdit_store_item_number->setMinimumSize(QSize(80, 20));
        lineEdit_store_item_number->setMaximumSize(QSize(80, 20));
        lineEdit_store_item_number->setBaseSize(QSize(80, 20));

        horizontalLayout_2->addWidget(lineEdit_store_item_number);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_store_supplier = new QLabel(Dialog_store_windows);
        label_store_supplier->setObjectName(QStringLiteral("label_store_supplier"));
        sizePolicy.setHeightForWidth(label_store_supplier->sizePolicy().hasHeightForWidth());
        label_store_supplier->setSizePolicy(sizePolicy);
        label_store_supplier->setMinimumSize(QSize(70, 20));
        label_store_supplier->setMaximumSize(QSize(70, 20));
        label_store_supplier->setBaseSize(QSize(70, 20));

        horizontalLayout->addWidget(label_store_supplier);

        comboBox_store_supplier = new QComboBox(Dialog_store_windows);
        comboBox_store_supplier->setObjectName(QStringLiteral("comboBox_store_supplier"));
        sizePolicy.setHeightForWidth(comboBox_store_supplier->sizePolicy().hasHeightForWidth());
        comboBox_store_supplier->setSizePolicy(sizePolicy);
        comboBox_store_supplier->setMinimumSize(QSize(80, 20));
        comboBox_store_supplier->setMaximumSize(QSize(80, 20));
        comboBox_store_supplier->setBaseSize(QSize(80, 20));
        comboBox_store_supplier->setEditable(true);
        comboBox_store_supplier->setInsertPolicy(QComboBox::InsertAlphabetically);

        horizontalLayout->addWidget(comboBox_store_supplier);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton_store_save = new QPushButton(Dialog_store_windows);
        pushButton_store_save->setObjectName(QStringLiteral("pushButton_store_save"));
        pushButton_store_save->setMinimumSize(QSize(95, 30));
        pushButton_store_save->setMaximumSize(QSize(95, 30));

        horizontalLayout_4->addWidget(pushButton_store_save);

        pushButton_store_cancel = new QPushButton(Dialog_store_windows);
        pushButton_store_cancel->setObjectName(QStringLiteral("pushButton_store_cancel"));
        pushButton_store_cancel->setMinimumSize(QSize(95, 30));
        pushButton_store_cancel->setMaximumSize(QSize(95, 30));

        horizontalLayout_4->addWidget(pushButton_store_cancel);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(Dialog_store_windows);

        comboBox_store_supplier->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Dialog_store_windows);
    } // setupUi

    void retranslateUi(QDialog *Dialog_store_windows)
    {
        Dialog_store_windows->setWindowTitle(QApplication::translate("Dialog_store_windows", "Dialog", nullptr));
        label_store_value->setText(QApplication::translate("Dialog_store_windows", "Value", nullptr));
        label_store_quantity->setText(QApplication::translate("Dialog_store_windows", "Quantity", nullptr));
        label_store_mounting->setText(QApplication::translate("Dialog_store_windows", "Mounting", nullptr));
        label_store_package->setText(QApplication::translate("Dialog_store_windows", "Package", nullptr));
        label_store_item_number->setText(QApplication::translate("Dialog_store_windows", "Item Number", nullptr));
        label_store_supplier->setText(QApplication::translate("Dialog_store_windows", "Supplier", nullptr));
        pushButton_store_save->setText(QApplication::translate("Dialog_store_windows", "Save", nullptr));
        pushButton_store_cancel->setText(QApplication::translate("Dialog_store_windows", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_store_windows: public Ui_Dialog_store_windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STORE_WINDOWS_H
