#include <memory>
#include <iostream>
#include <vector>

/**
 * A simple class which just reports when it is created (constructor) and when it is destroyed (destructor).
 */
class Reporter
{
public:
    Reporter(std::string id_string) : ID(id_string)
    {
        std::cout << "Creating Reporter Object with ID: " << ID << std::endl;
    }

    ~Reporter()
    {
        std::cout << "Destroying Reporter Object with ID: " << ID << std::endl;
    }

private:
    std::string ID;
};

Reporter *reporter1 = new Reporter("name1");
std::unique_ptr<Reporter> reporter2 = std::make_unique<Reporter>("name2");

int main()
{
    return 0;
}
