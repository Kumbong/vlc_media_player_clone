/********************************************************************************
** Form generated from reading UI file 'gototimedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOTIMEDIALOG_H
#define UI_GOTOTIMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_goToTimeDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTimeEdit *timeEdit;
    QToolButton *toolButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *goToTimeDialog)
    {
        if (goToTimeDialog->objectName().isEmpty())
            goToTimeDialog->setObjectName(QStringLiteral("goToTimeDialog"));
        goToTimeDialog->resize(203, 76);
        widget = new QWidget(goToTimeDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 181, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setCurrentSectionIndex(0);

        horizontalLayout->addWidget(timeEdit);

        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/refresh.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton->setIcon(icon);

        horizontalLayout->addWidget(toolButton);

        widget1 = new QWidget(goToTimeDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 40, 161, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(goToTimeDialog);

        QMetaObject::connectSlotsByName(goToTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *goToTimeDialog)
    {
        goToTimeDialog->setWindowTitle(QApplication::translate("goToTimeDialog", "Go to Time", Q_NULLPTR));
        label->setText(QApplication::translate("goToTimeDialog", "Go to time:", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("goToTimeDialog", "hh:mm:ss", Q_NULLPTR));
        toolButton->setText(QString());
        pushButton->setText(QApplication::translate("goToTimeDialog", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("goToTimeDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class goToTimeDialog: public Ui_goToTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOTIMEDIALOG_H
