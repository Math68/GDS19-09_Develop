/********************************************************************************
** Form generated from reading UI file 'dialog_parts_id_delete.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PARTS_ID_DELETE_H
#define UI_DIALOG_PARTS_ID_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_parts_id_delete
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_parts_id_delete)
    {
        if (Dialog_parts_id_delete->objectName().isEmpty())
            Dialog_parts_id_delete->setObjectName(QStringLiteral("Dialog_parts_id_delete"));
        Dialog_parts_id_delete->resize(217, 101);
        verticalLayout = new QVBoxLayout(Dialog_parts_id_delete);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_1 = new QLabel(Dialog_parts_id_delete);
        label_1->setObjectName(QStringLiteral("label_1"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_1->setFont(font);

        horizontalLayout->addWidget(label_1);

        label = new QLabel(Dialog_parts_id_delete);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(Dialog_parts_id_delete);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(Dialog_parts_id_delete);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(196, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(Dialog_parts_id_delete);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog_parts_id_delete);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog_parts_id_delete);

        QMetaObject::connectSlotsByName(Dialog_parts_id_delete);
    } // setupUi

    void retranslateUi(QDialog *Dialog_parts_id_delete)
    {
        Dialog_parts_id_delete->setWindowTitle(QApplication::translate("Dialog_parts_id_delete", "Delete Parts Id...", nullptr));
        label_1->setText(QApplication::translate("Dialog_parts_id_delete", "Parts Id", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("Dialog_parts_id_delete", "will be deleted !!!", nullptr));
        label_3->setText(QApplication::translate("Dialog_parts_id_delete", "Do you want to continue ?", nullptr));
        pushButton->setText(QApplication::translate("Dialog_parts_id_delete", "Yes", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog_parts_id_delete", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_parts_id_delete: public Ui_Dialog_parts_id_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PARTS_ID_DELETE_H
