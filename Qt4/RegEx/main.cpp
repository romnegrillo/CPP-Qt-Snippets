#include <QCoreApplication>
#include <iostream>
#include <QRegExp>
#include <QStringList>

//Qt4

QStringList get_all_match(QString pattern, QString to_search);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Regular Expression Test" << "\n\n";

    // Pattern
    // Starts with ESSID: followed by " followd by any character at least once
    // followed by another ". Group ()
    QString pattern = "ESSID:\"(.+)\"";

    // String to test.
    QString to_search = "ESSID:\"PLDTWIFIB4486\"\nESSID:\"Another Wifi-Name\"\nRandom String\nESSID:\"Another Wifi-Name 123\"";

    QStringList result = get_all_match(pattern, to_search);

    if(result.length() > 0)
    {
        std::cout << "Match:" << "\n";

        for(int i=0; i<result.length(); i++)
        {
            std::cout << result[i].toStdString() << "\n";
        }
    }

    return a.exec();
}

QStringList get_all_match(QString pattern, QString to_search)
{
    std::cout << "Pattern: " << pattern.toStdString() << "\n\n";
    std::cout << "Target: \n" << to_search.toStdString() << "\n\n";

    // Pattern
    QRegExp rx(pattern);
    rx.setMinimal(true); // Do not be greedy.


    // Where to store the matched string.
    QStringList list;
    int pos = 0;

    // Loop to check the string.
    while ((pos = rx.indexIn(to_search, pos)) != -1)
    {
        list << rx.cap(1);

        pos += rx.matchedLength();
    }

    return list;
}
