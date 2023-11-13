#pragma once
#include "Percussion.h"

class SnareDrum : public Percussion {
public:
	SnareDrum();
	~SnareDrum() override;

	void Beat() override;

private:
};

