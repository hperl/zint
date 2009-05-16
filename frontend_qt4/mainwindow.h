/***************************************************************************
 *   Copyright (C) 2008 by BogDan Vatra <bogdan@licentia.eu>               *
 *   Copyright (C) 2009 by Robin Stuart <robin@zint.org.uk>                *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <QGraphicsItem>

#include "ui_mainWindow.h"
#include "barcodeitem.h"

class MainWindow : public QWidget, private Ui::mainWindow
{
	Q_OBJECT

	Q_ENUMS(BarcodeTypes)

public:
	enum BarcodeTypes
	{
		AUSPOST		=63,
		AUSREPLY	=66,
		AUSROUTE	=67,
		AUSREDIRECT	=68,
		AZTEC		=92,
		AZRUNE		=128,
		CHANNEL		=140,
		CODE11		=1,
		CODE128		=20,
		CODE16K		=23,
		C25LOGIC	=6,
		C25IATA		=4,
		C25IND		=7,
		C25INTER	=3,
		C25MATRIX	=2,
		CODE32		=129,
		CODE39		=8,
		EXCODE39	=9,
		CODE49		=24,
		CODE93		=25,
		CODABAR		=18,
		CODABLOCKF	=74,
		RSS14		=29,
		RSS_EXP		=31,
		RSS_EXPSTACK	=81,
		RSS_LTD		=30,
		RSS14STACK	=79,
		RSS14STACK_OMNI	=80,
		DATAMATRIX	=71,
		DPIDENT		=22,
		DPLEIT		=21,
		KIX		=90,
		EAN14		=72,
		EANX		=13,
		FIM		=49,
		FLAT		=28,
		ITF14		=89,
		ISBNX		=69,
		JAPANPOST	=76,
		KOREAPOST	=77,
		LOGMARS		=50,
		MAXICODE	=57,
		MICROPDF417	=84,
		MICROQR		=97,
		MSI_PLESSEY	=47,
		NVE18		=75,
		PDF417		=55,
		PHARMA		=51,
		PHARMA_TWO	=53,
		PZN		=52,
		PLANET		=82,
		POSTNET		=40,
		QRCODE		=58,
		RM4SCC		=70,
		TELEPEN		=32,
		TELEPEN_NUM	=87,
		PLESSEY		=86,
		UPCA		=34,
		UPCE		=37,
		ONECODE		=85
	};

public:
	MainWindow(QWidget* parent = 0, Qt::WFlags fl = 0);
	~MainWindow();

public slots:
	void update_preview();
	void change_options();
	void on_fgcolor_clicked();
	void on_bgcolor_clicked();
	void composite_enable();
	void composite_ean_check();
	void aztec_size();
	void aztec_errorcorrect();
	void datamatrix_options();
	void qr_size();
	void qr_errorcorrect();
	void mqr_size();
	void mqr_errorcorrect();
	void maxi_primary();

private:
	QColor m_fgcolor,m_bgcolor;
	BarcodeItem m_bc;

};

#endif


