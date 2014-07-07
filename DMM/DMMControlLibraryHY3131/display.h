#ifndef DISPLAY_H
#define DISPLAY_H

#include <QDebug>
#include <QFrame>
#include <QLabel>
#include <QWidget>

#include <math.h>
#include <limits.h>
#include <assert.h>

class DISPLAY: public QFrame {

Q_OBJECT

protected:

	QLabel *digits[6];
	QLabel *dpoint[9];
	QLabel *sign;
	short noOfDigits;
	int m_intRange;

public:
	void initialize() {
		setStyleSheet(
				"QFrame{ border:1px solid black; border-radius:0px; background-color:black;color:yellow;}");

		sign = new QLabel(this);
		sign->setStyleSheet(
				"QLabel{border:0px solid black;border-radius:0px;background-color:black;color:#fbec5d;}");
		sign->setFont(QFont("DejaVu Sans", 85, 50, false));
		sign->setAlignment(Qt::AlignHCenter);
		sign->setAlignment(Qt::AlignVCenter);
		sign->setGeometry(20, 3, 30, 80);
		sign->setText("-");
		sign->setVisible(false);

		for (short i = 0; i < noOfDigits; i++) {
			digits[i] = new QLabel(this);
			digits[i]->setStyleSheet(
					"QLabel{border:0px solid white;border-radius:0px;background-color:black;color:#fbec5d;}");
			digits[i]->setFont(QFont("DejaVu Sans", 85, 50, false));
			digits[i]->setAlignment(Qt::AlignHCenter);
		}
		//    for(short i=0;i<(noOfDigits-1);i++){
		//           dpoint[i]=new QLabel(this);
		//           dpoint[i]->setStyleSheet("QLabel{border:0px solid black; border-radius:5px;background-color:#fbec5d;}");
		//           dpoint[i]->setFont(QFont("DejaVu Sans", 15, 50, false));
		//           dpoint[i]->setAlignment(Qt::AlignHCenter);
		//
		//       }
		//        selectDPoint(-1);
		m_intRange = 1;
	}

	void setXYWH() {
		for (short i = 0; i < noOfDigits; i++) {
			digits[i]->setGeometry((i + 1) * 50, 3, 50, 80);
		}
		//        for(short i=0;i<(noOfDigits-1);i++){
		//            dpoint[i]->setGeometry(((i+1)*50)+45,60,10,10);
		//        }

	}
	void selectGeometry(int x, int y) {
		setGeometry(x, y, 350, 90);
	}
	//    void selectDPoint(short dpno){
	//        for(short i=0;i<(noOfDigits-1);i++){
	//            if(i==dpno)
	//                dpoint[i]->setVisible(true);
	//            else
	//                dpoint[i]->setVisible(false);
	//        }
	//    }
	void setRange(int pRange) {
		m_intRange = pRange;
	}
	void setNoOfDigits(short no) {
		noOfDigits = no;
	}

	DISPLAY(QWidget * parent) {

		setParent(parent);
		setNoOfDigits(6);
		initialize();
		setXYWH();
	}
	void setValue(double l_nValue) {
		qDebug() << "Inside display.h-Data:" << l_nValue;

		QString l_strDecimelValue;
		QString Inf=QChar(0x221E);
		int l_intValue, Q, R;
		double l_nDecimelValue = 0;

	    if (l_nValue !=l_nValue){
	    	setValue("Err");
		}
/*	    else if (value > std::numeric_limits<qreal>::max()){
	    	setValue("+"+Inf);
	    }
	    else if (value < -std::numeric_limits<qreal>::max()){
	    	return "-"+Inf;
	    }*/
		else
		{
			if (l_nValue < 0){
				l_nValue = l_nValue * -1;
				sign->setVisible(true);
			}else{
				sign->setVisible(false);
			}

			for (int i = 0; i < 6; i++) {
				digits[i]->setText("0");
			}

			if (l_nValue != 0)
				l_intValue = floor(l_nValue);

			if ((m_intRange) >= 1 && (m_intRange) < 10) {
				if (l_intValue >= 10)
					setValue("OL");
				else {
					digits[0]->setText(QString::number(l_intValue, 10));
					digits[1]->setText(".");
					l_nDecimelValue = l_nValue - l_intValue;
					l_strDecimelValue = QString::number(l_nDecimelValue);
					//qDebug() << "l_strDecimelValue->" << l_strDecimelValue;

					if (l_strDecimelValue.length() >= 3)
						digits[2]->setText(l_strDecimelValue.at(2));
					else
						digits[2]->setText("0");

					if (l_strDecimelValue.length() >= 4)
						digits[3]->setText(l_strDecimelValue.at(3));
					else
						digits[3]->setText("0");

					if (l_strDecimelValue.length() >= 5)
						digits[4]->setText(l_strDecimelValue.at(4));
					else
						digits[4]->setText("0");

					if (l_strDecimelValue.length() >= 6)
						digits[5]->setText(l_strDecimelValue.at(5));
					else
						digits[5]->setText("0");

				}
			} else if ((m_intRange / 10) >= 1 && (m_intRange / 10) < 10) {
				if (l_intValue >= 100)
					setValue("OL");
				else {
					Q = l_intValue / 10;
					R = l_intValue % 10;
					digits[0]->setText(QString::number(Q, 10));
					digits[1]->setText(QString::number(R, 10));
					digits[2]->setText(".");
					l_nDecimelValue = l_nValue - l_intValue;
					l_strDecimelValue = QString::number(l_nDecimelValue);
					//qDebug() << "l_strDecimelValue->" << l_strDecimelValue;

					if (l_strDecimelValue.length() >= 3)
						digits[3]->setText(l_strDecimelValue.at(2));
					else
						digits[3]->setText("0");

					if (l_strDecimelValue.length() >= 4)
						digits[4]->setText(l_strDecimelValue.at(3));
					else
						digits[4]->setText("0");

					if (l_strDecimelValue.length() >= 5)
						digits[5]->setText(l_strDecimelValue.at(4));
					else
						digits[5]->setText("0");

				}
			} else if ((m_intRange / 100) >= 1 && (m_intRange / 100) < 10) {
				if (l_intValue >= 1000)
					setValue("OL");
				else {
					Q = l_intValue / 100;
					R = l_intValue % 100;
					digits[0]->setText(QString::number(Q, 10));
					Q = R / 10;
					R = R % 10;
					digits[1]->setText(QString::number(Q, 10));
					digits[2]->setText(QString::number(R, 10));
					digits[3]->setText(".");
					l_nDecimelValue = l_nValue - l_intValue;
					l_strDecimelValue = QString::number(l_nDecimelValue);
					//qDebug() << "l_strDecimelValue->" << l_strDecimelValue;

					if (l_strDecimelValue.length() >= 3)
						digits[4]->setText(l_strDecimelValue.at(2));
					else
						digits[4]->setText("0");

					if (l_strDecimelValue.length() >= 4)
						digits[5]->setText(l_strDecimelValue.at(3));
					else
						digits[5]->setText("0");

				}
			} else if ((m_intRange / 1000) >= 1 && (m_intRange / 1000) < 10) {
				if (l_intValue >= 10000)
					setValue("OL");
				else {
					Q = l_intValue / 1000;
					R = l_intValue % 1000;
					digits[0]->setText(QString::number(Q, 10));
					Q = R / 100;
					R = R % 100;
					digits[1]->setText(QString::number(Q, 10));
					Q = R / 10;
					R = R % 10;
					digits[2]->setText(QString::number(Q, 10));
					digits[3]->setText(QString::number(R, 10));
					digits[4]->setText(".");
					l_nDecimelValue = l_nValue - l_intValue;
					l_strDecimelValue = QString::number(l_nDecimelValue);
					//qDebug() << "l_strDecimelValue->" << l_strDecimelValue;

					if (l_strDecimelValue.length() >= 3)
						digits[5]->setText(l_strDecimelValue.at(2));
					else
						digits[5]->setText("0");

				}
			} else if ((m_intRange / 10000) >= 1 && (m_intRange / 10000) < 10) {
				if (l_intValue >= 100000)
					setValue("OL");
				else {
					Q = l_intValue / 10000;
					R = l_intValue % 10000;
					digits[0]->setText(QString::number(Q, 10));
					Q = R / 1000;
					R = R % 1000;
					digits[1]->setText(QString::number(Q, 10));
					Q = R / 100;
					R = R % 100;
					digits[2]->setText(QString::number(Q, 10));
					Q = R / 10;
					R = R % 10;
					digits[3]->setText(QString::number(Q, 10));
					digits[4]->setText(QString::number(R, 10));
				}
			}
		}
	}
	void setValueOld(double value) {

		QString strValue = QString::number(value);
		//qDebug() << "Inside display.h-->Received Data:" << strValue;
		int signIndex = strValue.indexOf("-");
		if (signIndex != -1) {
			strValue = strValue.remove("-");
			sign->setVisible(true);
		} else {
			sign->setVisible(false);
		}
		int count = strValue.count();
		if (count > 6)
			count = 6;
		for (short i = 0; i < 6; i++)
			if (i < count)
				digits[i]->setText(QString(strValue[i]));
			else
				digits[i]->setText(" ");

	}
	void setValue(QString strValue) {
		int signIndex = strValue.indexOf("-");
		if (signIndex != -1) {
			strValue = strValue.remove("-");
			sign->setVisible(true);
		} else {
			sign->setVisible(false);
		}
		int count = strValue.count();
		if (count > 6)
			count = 6;
		for (short i = 0; i < 6; i++)
			if (i < count)
				digits[i]->setText(QString(strValue[i]));
			else
				digits[i]->setText(" ");
	}

	~DISPLAY() {
	}

};
#endif // DISPLAY_H