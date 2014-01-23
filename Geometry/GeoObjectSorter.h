////////////////////////////////////////////////////////////////////////
/// \file  GeoObjectSorter.h
/// \brief Interface to algorithm class for sorting geo::XXXGeo objects
///
/// \version $Id:  $
/// \author  brebel@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef GEO_GEOOBJECTSORTER_H
#define GEO_GEOOBJECTSORTER_H

#include <vector>

#include "SimpleTypesAndConstants/geo_types.h"

#include "fhiclcpp/ParameterSet.h"

namespace geo{
  
  class TPCGeo;
  class PlaneGeo;
  class WireGeo;
  class CryostatGeo;
  
  class GeoObjectSorter {

  public:

    GeoObjectSorter();
    ~GeoObjectSorter();

    virtual void SortCryostats(std::vector<geo::CryostatGeo*> & cgeo)     const = 0;
    virtual void SortTPCs     (std::vector<geo::TPCGeo*>      & tgeo)     const = 0;
    virtual void SortPlanes   (std::vector<geo::PlaneGeo*>    & pgeo, 
			       geo::DriftDirection_t     const& driftDir) const = 0;
    virtual void SortWires    (std::vector<geo::WireGeo*>     & wgeo)     const = 0;
    
  private:
    
  };

}

#endif // GEO_GEOOBJECTSORTER_H