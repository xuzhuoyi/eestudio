#include "eestudio.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>

EEStudio::EEStudio(QWidget *parent) :
    QWidget(parent)
{

}

EEStudio::~EEStudio()
{

}

EEStudio::__InitUi()
{
    QGridLayout m_gl = new QGridLayout;
    m_lComNum = new QLabel("COM");
    m_lBaudrate = new QLabel("Baudrate");
    m_lSendText = new QLabel("Text");
    m_lRecvText = new QLabel;
    m_pbSend = new QPushButton("Send");
    m_leSendText = new QLineEdit;
    m_cbCom = new QComboBox;

    m_gl.addWidget(m_lComNum, 0, 0);
    m_gl.addWidget(m_cbCom, 0, 1);
    m_gl.addWidget(m_lBaudrate, 1, 0);
}
