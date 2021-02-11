#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"
#include "NeighbourTile.h"

class Tile : public DisplayObject
{
public:
	// Constructor
	Tile();
	
	// Destructor
	~Tile();
	
	// Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;

	Tile* getNeighbourTile(const NeighbourTile position);
	void setNeighbourTile(const NeighbourTile position, Tile* tile);

	float getTileCost();
	void setTileCost(float cost);
private:
	float m_cost;
	Tile* m_neighbours[NUM_OF_NEIGHBOUR_TILES];
	
};

#endif /* defined (__TILE__) */