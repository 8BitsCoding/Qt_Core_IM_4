#pragma once

#include <qobject.h>
#include <qdebug.h>

class test : public QObject
{
	Q_OBJECT
public:
	explicit test(QObject* parent = nullptr);
	~test();

signals:

public slots:
};