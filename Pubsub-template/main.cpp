#include <iostream>
#include <string>
#include "publisher.hpp"
#include "subscriber.hpp"
using namespace std;



int main()
{
    subscriber Janik("Janik");
    subscriber Schnecke("Schnecke");

    publisher eventbus("Eventbus");

    eventbus.addsubscriber("Paare", &Janik);
    eventbus.addsubscriber("Paare", &Schnecke);

    eventbus.addsubscriber("Mädchen", &Schnecke);

    eventbus.addsubscriber("Jungs", &Janik);

    eventbus.notify("Jungs", "Mädchen sind doof");
    eventbus.notify("Paare", "Wer das kriegt liebt sich");


}