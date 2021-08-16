/********************************************************************************
** Form generated from reading UI file 'pvpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PVPWIDGET_H
#define UI_PVPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pvpwidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *pvpwidget)
    {
        if (pvpwidget->objectName().isEmpty())
            pvpwidget->setObjectName(QStringLiteral("pvpwidget"));
        pvpwidget->resize(982, 544);
        gridLayout = new QGridLayout(pvpwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(426, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        widget = new QWidget(pvpwidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout->addWidget(widget, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(425, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(pvpwidget);

        QMetaObject::connectSlotsByName(pvpwidget);
    } // setupUi

    void retranslateUi(QWidget *pvpwidget)
    {
        pvpwidget->setWindowTitle(QApplication::translate("pvpwidget", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("pvpwidget", "0-ai", Q_NULLPTR));
        pushButton->setText(QApplication::translate("pvpwidget", "Begin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pvpwidget: public Ui_pvpwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVPWIDGET_H
