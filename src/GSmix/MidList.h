#ifndef MIDLIST_H
#define MIDLIST_H

#include <QWidget>
#include "ui_MidList.h"

class MidList
	: public QWidget
{
	Q_OBJECT

public:
	MidList(QWidget *parent = 0);
	~MidList();
	void loadMidsFromNGSD();

private slots:
	void filter(QString text);

private:
	Ui::MidList ui;
};

#endif // MIDLIST_H
