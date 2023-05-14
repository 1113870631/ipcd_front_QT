/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFormLayout *formLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_lint;
    QPushButton *pushButton_diff;
    QPushButton *pushButton_del;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(818, 618);
        formLayout = new QFormLayout(Widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        frame_3 = new QFrame(Widget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(800, 600));
        frame_3->setMaximumSize(QSize(800, 600));
        frame_3->setBaseSize(QSize(800, 600));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(frame_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(1000, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setLineWidth(2);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_lint = new QPushButton(frame_2);
        pushButton_lint->setObjectName(QString::fromUtf8("pushButton_lint"));
        pushButton_lint->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_lint);

        pushButton_diff = new QPushButton(frame_2);
        pushButton_diff->setObjectName(QString::fromUtf8("pushButton_diff"));
        pushButton_diff->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_diff);

        pushButton_del = new QPushButton(frame_2);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_del);

        pushButton_add = new QPushButton(frame_2);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_add);

        pushButton_remove = new QPushButton(frame_2);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        pushButton_remove->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_remove);

        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(frame_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_8);


        horizontalLayout->addWidget(frame_2);


        formLayout->setWidget(0, QFormLayout::SpanningRole, frame_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", " \345\275\223\345\211\215\351\200\211\346\213\251\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_lint->setText(QApplication::translate("Widget", "lint", nullptr));
        pushButton_diff->setText(QApplication::translate("Widget", "diff", nullptr));
        pushButton_del->setText(QApplication::translate("Widget", "del", nullptr));
        pushButton_add->setText(QApplication::translate("Widget", "add", nullptr));
        pushButton_remove->setText(QApplication::translate("Widget", "remove", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
