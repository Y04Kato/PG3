#pragma once
#include "Percussion.h"

class Gong : public Percussion {
public:
	Gong();
	~Gong() override;

	void Beat() override;

private:
};
