#include <string>
#include <iostream>

using namespace std;

class AutoData {

public:
    AutoData()
    {
        mpg = 1110;
        cylinders = 9990;
        displacement = 0;
        horsepower = 0;
        weight = 0;
        acceleration = 0;
        modelYear = 0;
        origin = 0;
        carName = "";
    }

    AutoData( const AutoData & rhs)
    {
        setAuto(rhs.mpg, rhs.cylinders, rhs.displacement, rhs.horsepower, rhs.weight, rhs.acceleration, rhs.modelYear, rhs.origin, rhs.carName);
    }

    void setAuto(float mp, int cy, float di, float ho, float we, float ac, int mo, int o, string ca)
    {
        mpg = mp;
        cylinders = cy;
        displacement = di;
        horsepower = ho;
        weight = we;
        acceleration = ac;
        modelYear = mo;
        origin = o;
        carName = ca;
    }

    const float & getmpg( ) const
    {
        return mpg;
    }

    const int & getcylinders( ) const
    {
        return cylinders;
    }

    const float & getdisplacement( ) const
    {
        return displacement;
    }

    const float & gethorsepower( ) const
    {
        return horsepower;
    }

    const float & getweight( ) const
    {
        return weight;
    }

    const float & getacceleration( ) const
    {
        return acceleration;
    }

    const int & getmodelYear( ) const
    {
        return modelYear;
    }

    const int & getorigin( ) const
    {
        return origin;
    }

    const string & getcarName( ) const
    {
        return carName;
    }

    bool operator == (const AutoData & rhs ) const
    {
        if( getmpg( ) == rhs.getmpg( ) )
        {
            return gethorsepower( ) == rhs.gethorsepower( );
        }

        else
        {
            return false;
        }
    }

    bool operator > ( const AutoData & rhs ) const
    {
        if( rhs.getmpg( ) > getmpg( ) )
        {
            return true;
        }

        else if( getmpg( ) == rhs.getmpg( ) )
        {
            if( rhs.gethorsepower( ) > gethorsepower( ) )
            {
                return true;
            }
        }

        else
        {
            return false;
        }
    }


private:
    float mpg;
    int cylinders;
    float displacement;
    float horsepower;
    float weight;
    float acceleration;
    int modelYear;
    int origin;
    string carName;
};

//overloading the output stream operator operator<<:
std::ostream& operator<<(std::ostream &out, AutoData const& data) {
  // std::cout << " value data = "<< data.getcylinders() << '\n';
    // printf("data %", data);
    out << data.getmpg() << ':';
    out << data.getcylinders() << ':';
    // and so on... 
    return out;
}

int main(){
  AutoData myAuto;
  std::cout << myAuto << '\n';

  return 0;
}