#include <iostream>
#include "BlogPost.h"

int main() {
    BlogPost blogp("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    std::cout << blogp.getTitle() << " titled by " << blogp.getAuthorName() << " posted at "
              << blogp.getPublicationDate() << std::endl << blogp.getTitle() << std::endl;
    BlogPost blogp1("Tim Urban", "Wait but why",
                    "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10");
    std::cout << blogp1.getTitle() << " titled by " << blogp1.getAuthorName() << " posted at "
              << blogp1.getPublicationDate() << std::endl << blogp1.getText() << std::endl;
    BlogPost blogp2("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump",
                    "Daniel Hanley, a cybersecurity engineer at IBM, doesn't want to be the center of attention. When I asked to take his picture outside one of IBM's New York City offices, he told me that he wasn't really into the whole organizer profile thing.",
                    "2017.03.28.");
    std::cout << blogp2.getTitle() << " titled by " << blogp2.getAuthorName() << " at "
              << blogp2.getPublicationDate() << std::endl << blogp2.getText() << std::endl;
    return 0;
}