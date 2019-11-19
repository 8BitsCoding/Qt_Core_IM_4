#include "test.h"

#include <qdebug.h>

test::test(QObject* parent) : QObject(parent)
{
	qInfo() << "test class Created!";
}

test::~test()
{
	qInfo() << "test class destructed!";
}