// This test does nothing
// Made this file to just try out ecm_add_test()


#include <QtTest/QtTest>

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toLower();
};

void TestQString::toLower()
{
    QString str = "Hello";
    QCOMPARE(str.toLower(), QString("hello"));
}

QTEST_MAIN(TestQString)
#include "main.moc"
