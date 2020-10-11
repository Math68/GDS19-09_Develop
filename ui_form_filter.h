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
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_filter;
    QComboBox *comboBox_filter_item_number;
    QComboBox *comboBox_filter_package;
    QComboBox *comboBox_filter_supplier;
    QLabel *label_filter_mounting;
    QLabel *label_filter_item_number;
    QComboBox *comboBox_filter_mounting;
    QLabel *label_filter_package;
    QLabel *label_filter_supplier;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_filter_reset;
    QPushButton *pushButton_filter_activate_filter;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Form_filter)
    {
        if (Form_filter->objectName().isEmpty())
            Form_filter->setObjectName(QStringLiteral("Form_filter"));
        Form_filter->resize(538, 54);
        horizontalLayout_2 = new QHBoxLayout(Form_filter);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_filter = new QGridLayout();
        gridLayout_filter->setObjectName(QStringLiteral("gridLayout_filter"));
        gridLayout_filter->setHorizontalSpacing(2);
        gridLayout_filter->setVerticalSpacing(4);
        gridLayout_filter->setContentsMargins(0, -1, -1, -1);
        comboBox_filter_item_number = new QComboBox(Form_filter);
        comboBox_filter_item_number->setObjectName(QStringLiteral("comboBox_filter_item_number"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_filter_item_number->sizePolicy().hasHeightForWidth());
        comboBox_filter_item_number->setSizePolicy(sizePolicy);
        comboBox_filter_item_number->setMinimumSize(QSize(65, 20));
        comboBox_filter_item_number->setBaseSize(QSize(65, 20));
        comboBox_filter_item_number->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_filter->addWidget(comboBox_filter_item_number, 0, 1, 1, 1);

        comboBox_filter_package = new QComboBox(Form_filter);
        comboBox_filter_package->setObjectName(QStringLiteral("comboBox_filter_package"));
        sizePolicy.setHeightForWidth(comboBox_filter_package->sizePolicy().hasHeightForWidth());
        comboBox_filter_package->setSizePolicy(sizePolicy);
        comboBox_filter_package->setMinimumSize(QSize(65, 20));
        comboBox_filter_package->setBaseSize(QSize(65, 20));
        comboBox_filter_package->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_filter->addWidget(comboBox_filter_package, 0, 7, 1, 1);

        comboBox_filter_supplier = new QComboBox(Form_filter);
        comboBox_filter_supplier->setObjectName(QStringLiteral("comboBox_filter_supplier"));
        sizePolicy.setHeightForWidth(comboBox_filter_supplier->sizePolicy().hasHeightForWidth());
        comboBox_filter_supplier->setSizePolicy(sizePolicy);
        comboBox_filter_supplier->setMinimumSize(QSize(65, 20));
        comboBox_filter_supplier->setBaseSize(QSize(65, 20));
        comboBox_filter_supplier->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_filter->addWidget(comboBox_filter_supplier, 0, 3, 1, 1);

        label_filter_mounting = new QLabel(Form_filter);
        label_filter_mounting->setObjectName(QStringLiteral("label_filter_mounting"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_filter_mounting->sizePolicy().hasHeightForWidth());
        label_filter_mounting->setSizePolicy(sizePolicy1);
        label_filter_mounting->setMinimumSize(QSize(65, 20));
        label_filter_mounting->setMaximumSize(QSize(65, 20));
        label_filter_mounting->setBaseSize(QSize(65, 20));
        label_filter_mounting->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_mounting, 0, 4, 1, 1);

        label_filter_item_number = new QLabel(Form_filter);
        label_filter_item_number->setObjectName(QStringLiteral("label_filter_item_number"));
        label_filter_item_number->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_filter_item_number->sizePolicy().hasHeightForWidth());
        label_filter_item_number->setSizePolicy(sizePolicy1);
        label_filter_item_number->setMinimumSize(QSize(65, 20));
        label_filter_item_number->setMaximumSize(QSize(65, 20));
        label_filter_item_number->setBaseSize(QSize(65, 20));
        label_filter_item_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_item_number, 0, 0, 1, 1);

        comboBox_filter_mounting = new QComboBox(Form_filter);
        comboBox_filter_mounting->setObjectName(QStringLiteral("comboBox_filter_mounting"));
        sizePolicy.setHeightForWidth(comboBox_filter_mounting->sizePolicy().hasHeightForWidth());
        comboBox_filter_mounting->setSizePolicy(sizePolicy);
        comboBox_filter_mounting->setMinimumSize(QSize(65, 20));
        comboBox_filter_mounting->setBaseSize(QSize(65, 20));
        comboBox_filter_mounting->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_filter->addWidget(comboBox_filter_mounting, 0, 5, 1, 1);

        label_filter_package = new QLabel(Form_filter);
        label_filter_package->setObjectName(QStringLiteral("label_filter_package"));
        sizePolicy1.setHeightForWidth(label_filter_package->sizePolicy().hasHeightForWidth());
        label_filter_package->setSizePolicy(sizePolicy1);
        label_filter_package->setMinimumSize(QSize(65, 20));
        label_filter_package->setMaximumSize(QSize(65, 20));
        label_filter_package->setBaseSize(QSize(65, 20));
        label_filter_package->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_package, 0, 6, 1, 1);

        label_filter_supplier = new QLabel(Form_filter);
        label_filter_supplier->setObjectName(QStringLiteral("label_filter_supplier"));
        sizePolicy1.setHeightForWidth(label_filter_supplier->sizePolicy().hasHeightForWidth());
        label_filter_supplier->setSizePolicy(sizePolicy1);
        label_filter_supplier->setMinimumSize(QSize(65, 20));
        label_filter_supplier->setMaximumSize(QSize(65, 20));
        label_filter_supplier->setBaseSize(QSize(65, 20));
        label_filter_supplier->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_filter->addWidget(label_filter_supplier, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_filter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_filter_reset = new QPushButton(Form_filter);
        pushButton_filter_reset->setObjectName(QStringLiteral("pushButton_filter_reset"));
        pushButton_filter_reset->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pushButton_filter_reset);

        pushButton_filter_activate_filter = new QPushButton(Form_filter);
        pushButton_filter_activate_filter->setObjectName(QStringLiteral("pushButton_filter_activate_filter"));
        pushButton_filter_activate_filter->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pushButton_filter_activate_filter);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(Form_filter);

        QMetaObject::connectSlotsByName(Form_filter);
    } // setupUi

    void retranslateUi(QWidget *Form_filter)
    {
        Form_filter->setWindowTitle(QApplication::translate("Form_filter", "Form", nullptr));
        label_filter_mounting->setText(QApplication::translate("Form_filter", "Mounting", nullptr));
        label_filter_item_number->setText(QApplication::translate("Form_filter", "Item Number", nullptr));
        label_filter_package->setText(QApplication::translate("Form_filter", "Package", nullptr));
        label_filter_supplier->setText(QApplication::translate("Form_filter", "Supplier", nullptr));
        pushButton_filter_reset->setText(QApplication::translate("Form_filter", "Reset Filter", nullptr));
        pushButton_filter_activate_filter->setText(QApplication::translate("Form_filter", "Activate Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_filter: public Ui_Form_filter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_FILTER_H
