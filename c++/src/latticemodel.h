/*
  Copyright (c)  2012  Mikael Leetmaa

  This file is part of the KMCLib project distributed under the terms of the
  GNU General Public License version 3, see <http://www.gnu.org/licenses/>.
*/



/*! \file  latticemodel.h
 *  \brief File for the LatticeModel class definition.
 */



#ifndef __LATTICEMODEL__
#define __LATTICEMODEL__


#include "latticemap.h"

// Forward declarations.
class Configuration;

/// Class for defining and running a lattice KMC model.
class LatticeModel {

public:

    /*! \brief Constructor for setting up the model.
     *  \param configuration: The configuration to run the simulation on.
     *  \param lattice_map  : A lattice map object describing the lattice.
     */
    LatticeModel(Configuration & configuration,
                 const LatticeMap & lattice_map);

    /*! \brief Function for taking one time step in the KMC lattice model.
     */
    void singleStep();

protected:

private:

    /// A reference to the configuration given at construction.
    Configuration & configuration_;

    /// A description of the lattice.
    LatticeMap lattice_map_;

};


#endif // __LATTICEMODEL__

