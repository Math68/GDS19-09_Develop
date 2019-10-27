/********************************************************************************
** Form generated from reading UI file 'dialog_parts_id_update.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PARTS_ID_UPDATE_H
#define UI_DIALOG_PARTS_ID_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_parts_id_update
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_parts_id_update)
    {
        if (Dialog_parts_id_update->objectName().isEmpty())
            Dialog_parts_id_update->setObjectName(QStringLiteral("Dialog_parts_id_update"));
        Dialog_parts_id_update->resize(249, 110);
        verticalLayout = new QVBoxLayout(Dialog_parts_id_update);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(Dialog_parts_id_update);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(Dialog_parts_id_update);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 20));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog_parts_id_update);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setMinimumSize(QSize(60, 20));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog_parts_id_update);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 20));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(Dialog_parts_id_update);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setMinimumSize(QSize(100, 25));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog_parts_id_update);
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_parts_id_update, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_parts_id_update);
    } // setupUi

    void retranslateUi(QDialog *Dialog_parts_id_update)
    {
        Dialog_parts_id_update->setWindowTitle(QApplication::translate("Dialog_parts_id_update", "Update Part Id...", nullptr));
        label_2->setText(QApplication::translate("Dialog_parts_id_update", "Parts Id: ", nullptr));
        label_3->setText(QApplication::translate("Dialog_parts_id_update", "TextLabel", nullptr));
        label->setText(QApplication::translate("Dialog_parts_id_update", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_parts_id_update: public Ui_Dialog_parts_id_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PARTS_ID_UPDATE_H
