#include "eestudio.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>

EEStudio::EEStudio(QWidget *parent) :
    QWidget(parent)
{
    __InitUi();
}

EEStudio::~EEStudio()
{

}

void EEStudio::__InitUi()
{
    m_gl = new QGridLayout;
    m_lComNum = new QLabel("COM");
    m_lBaudrate = new QLabel("Baudrate");
    m_lSentText = new QLabel("Text");
    m_lRecvText = new QLabel;
    m_pbSend = new QPushButton("Send");
    m_leSentText = new QLineEdit;
    m_cbCom = new QComboBox;
    m_cbBaudrate = new QComboBox;

    m_gl->addWidget(m_lComNum, 0, 0);
    m_gl->addWidget(m_cbCom, 0, 1);
    m_gl->addWidget(m_lBaudrate, 1, 0);
    m_gl->addWidget(m_cbBaudrate, 1, 1);
    m_gl->addWidget(m_lSentText, 2, 0);
    m_gl->addWidget(m_leSentText, 2, 1);
    m_gl->addWidget(m_pbSend, 3, 1);
    m_gl->addWidget(m_pbSend, 4, 0, 1, 2);

    setLayout(m_gl);
    resize(300,169);
}
