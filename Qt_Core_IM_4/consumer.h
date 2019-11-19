#pragma once

#include <qobject.h>
#include <qdebug.h>
#include <qsharedpointer.h>

#include "test.h"

class consumer : public QObject
{
	Q_OBJECT
public:
	explicit consumer(QObject* parent = nullptr);
	~consumer();

	QSharedPointer<test> tester;

signals:

public slots:
};

