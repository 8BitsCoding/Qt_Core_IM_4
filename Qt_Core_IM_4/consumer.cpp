#include "consumer.h"

consumer::consumer(QObject* parent) : QObject(parent)
{
	qInfo() << "consumer class Created!";
}

consumer::~consumer()
{
	qInfo() << "consumer class Destructed!";
}
