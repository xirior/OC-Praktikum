package de.uniluebeck.itm.icontrol.communication.listener;

/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
 ------------------------------------------------------------------------*/

public interface MessageListener {
	void onMessage(int robotId, String taskName, int valueLength, int[] values);
}
