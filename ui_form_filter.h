/********************************************************************************
** Form generated from reading UI file 'form_filter.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_FILTER_H
#define UI_FORM_FILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_filter
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_filter;
    QLabel *label_filter_item_number;
    QComboBox *comboBox_filter_item_number;
    QSpacerItem *horizontalSpacer;
    QLabel *label_filter_supplier;
    QComboBox *comboBox_filter_supplier;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_filter_mounting;
    QComboBox *comboBox_filter_mounting;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_filter_package;
    QComboBox *comboBox_filter_package;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_filter_reset;
    QPushButton *pushButton_filter_activate_filter;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Form_filter)
    {
        if (Form_filter->objectName().isEmpty())
            Form_filter->setObjectName(QStringLiteral("Form_filter"));
        Form_filter->resize(730, 75);
        verticalLayout_2 = new QVBoxLayout(Form_filter);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_filter = new QGridLayout();
        gridLayout_filter->setObjectName(QStringLiteral("gridLayout_filter"));
        label_filter_item_number = new QLabel(Form_filter);
        label_filter_item_number->setObjectName(QStringLiteral("label_filter_item_number"));
        label_filter_item_number->setEnabled(true);
        label_filter_item_number->setMinimumSize(QSize(65, 20));
        label_filter_item_number->setMaximumSize(QSize(65, 20));
        label_filter_item_number->setBaseSize(QSize(65, 20));
        label_filter_item_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_item_number, 0, 0, 1, 1);

        comboBox_filter_item_number = new QComboBox(Form_filter);
        comboBox_filter_item_number->setObjectName(QStringLiteral("comboBox_filter_item_number"));
        comboBox_filter_item_number->setMinimumSize(QSize(80, 20));
        comboBox_filter_item_number->setBaseSize(QSize(80, 20));

        gridLayout_filter->addWidget(comboBox_filter_item_number, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_filter->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_filter_supplier = new QLabel(Form_filter);
        label_filter_supplier->setObjectName(QStringLiteral("label_filter_supplier"));
        label_filter_supplier->setMinimumSize(QSize(65, 20));
        label_filter_supplier->setMaximumSize(QSize(65, 20));
        label_filter_supplier->setBaseSize(QSize(65, 20));
        label_filter_supplier->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_supplier, 0, 3, 1, 1);

        comboBox_filter_supplier = new QComboBox(Form_filter);
        comboBox_filter_supplier->setObjectName(QStringLiteral("comboBox_filter_supplier"));
        comboBox_filter_supplier->setMinimumSize(QSize(80, 20));
        comboBox_filter_supplier->setBaseSize(QSize(80, 20));

        gridLayout_filter->addWidget(comboBox_filter_supplier, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_filter->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        label_filter_mounting = new QLabel(Form_filter);
        label_filter_mounting->setObjectName(QStringLiteral("label_filter_mounting"));
        label_filter_mounting->setMinimumSize(QSize(65, 20));
        label_filter_mounting->setMaximumSize(QSize(65, 20));
        label_filter_mounting->setBaseSize(QSize(65, 20));
        label_filter_mounting->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_mounting, 0, 6, 1, 1);

        comboBox_filter_mounting = new QComboBox(Form_filter);
        comboBox_filter_mounting->setObjectName(QStringLiteral("comboBox_filter_mounting"));
        comboBox_filter_mounting->setMinimumSize(QSize(80, 20));
        comboBox_filter_mounting->setMaximumSize(QSize(80, 20));
        comboBox_filter_mounting->setBaseSize(QSize(80, 20));

        gridLayout_filter->addWidget(comboBox_filter_mounting, 0, 7, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_filter->addItem(horizontalSpacer_6, 0, 8, 1, 1);

        label_filter_package = new QLabel(Form_filter);
        label_filter_package->setObjectName(QStringLiteral("label_filter_package"));
        label_filter_package->setMinimumSize(QSize(65, 20));
        label_filter_package->setMaximumSize(QSize(65, 20));
        label_filter_package->setBaseSize(QSize(65, 20));
        label_filter_package->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_package, 0, 9, 1, 1);

        comboBox_filter_package = new QComboBox(Form_filter);
        comboBox_filter_package->setObjectName(QStringLiteral("comboBox_filter_package"));
        comboBox_filter_package->setMinimumSize(QSize(80, 20));
        comboBox_filter_package->setMaximumSize(QSize(80, 20));
        comboBox_filter_package->setBaseSize(QSize(80, 20));

        gridLayout_filter->addWidget(comboBox_filter_package, 0, 10, 1, 1);


        verticalLayout->addLayout(gridLayout_filter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_filter_reset = new QPushButton(Form_filter);
        pushButton_filter_reset->setObjectName(QStringLiteral("pushButton_filter_reset"));
        pushButton_filter_reset->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(pushButton_filter_reset);

        pushButton_filter_activate_filter = new QPushButton(Form_filter);
        pushButton_filter_activate_filter->setObjectName(QStringLiteral("pushButton_filter_activate_filter"));
        pushButton_filter_activate_filter->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(pushButton_filter_activate_filter);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Form_filter);

        QMetaObject::connectSlotsByName(Form_filter);
    } // setupUi

    void retranslateUi(QWidget *Form_filter)
    {
        Form_filter->setWindowTitle(QApplication::translate("Form_filter", "Form", nullptr));
        label_filter_item_number->setText(QApplication::translate("Form_filter", "Item Number", nullptr));
        label_filter_supplier->setText(QApplication::translate("Form_filter", "Supplier", nullptr));
        label_filter_mounting->setText(QApplication::translate("Form_filter", "Mounting", nullptr));
        label_filter_package->setText(QApplication::translate("Form_filter", "Package", nullptr));
        pushButton_filter_reset->setText(QApplication::translate("Form_filter", "Reset Filter", nullptr));
        pushButton_filter_activate_filter->setText(QApplication::translate("Form_filter", "Activate Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_filter: public Ui_Form_filter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_FILTER_H
