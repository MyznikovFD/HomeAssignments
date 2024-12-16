//target - to test virtual methods and explore functionality if vectors 

#include <vector>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"


void testWithoutVector()
{
    std::cout << "default test start" << std::endl << std::endl;
    
    Transformers transformer;
    Autobots autobot;
    Decepticons decepticon;

    transformer.transform();
    transformer.fire();
    transformer.ultimate();

    autobot.transform();
    autobot.fire();
    autobot.ultimate();

    decepticon.transform();
    decepticon.fire();
    decepticon.ultimate();
    
    std::cout << std::endl << "default test over" << std::endl;
};

void testVector()
{
    std::cout << std::endl << "vector test start" << std::endl << std::endl;

    Transformers* tr1 = new Transformers();
    Autobots* aut1 = new Autobots();
    Decepticons* dec1 = new Decepticons();
    
    Transformers* tr2 = new Transformers();
    Autobots* aut2 = new Autobots();
    Decepticons* dec2 = new Decepticons();
    
    Transformers* tr3 = new Transformers();
    Autobots* aut3 = new Autobots();
    Decepticons* dec3 = new Decepticons();

    std::vector<Transformers*> transformers = {tr1, aut1, dec1, tr2, aut2, dec2, tr3, aut3, dec3};
    for (Transformers* transformer: transformers)
    {
        transformer->transform();
        transformer->fire();
        transformer->ultimate();
        delete transformer;
        // deleting is correct becouse of virtual destructor in base class
    };
    
    std::cout << std::endl << "default test over" << std::endl;
};

 int main()
 {
    testWithoutVector();
    
    testVector();
 };
