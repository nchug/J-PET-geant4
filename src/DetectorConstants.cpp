#include "DetectorConstants.h"

namespace detector_constants
{
      namespace // hiding variables
      {
        static G4double fScinHitMergingTime = 2.0; //ns
      }

G4double GetMergingTimeValueForScin()
{
  return fScinHitMergingTime;
}


void SetMergingTimeValueForScin(G4double x)
{
  if(x<=0.0){
     G4Exception("DetectorConstants","DConst01",JustWarning,
         "Time can not be negative! Nothing happend");
  } else {
    fScinHitMergingTime=x;
  }
}

}
