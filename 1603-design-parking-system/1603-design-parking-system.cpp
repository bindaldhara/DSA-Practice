class ParkingSystem {
public:
    int big, medium, small;
  ParkingSystem(int big, int medium, int small): big(big), medium(medium), small(small) {
      
  }

  bool addCar(int carType) {
    if(carType == 1)
      return big-- > 0;
    else if(carType == 2)
      return medium-- > 0;
    return small-- > 0;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */