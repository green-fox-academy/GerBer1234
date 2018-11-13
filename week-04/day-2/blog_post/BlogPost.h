#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H

#include<iostream>

class BlogPost {
public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);
    std::string getAuthorName();
    std::string getTitle();
    std::string getText();
    std::string getPublicationDate();

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //BLOG_POST_BLOGPOST_H
