package de.uniluebeck.itm.icontrol.communication.listener;

public interface MessageListener {
	void onMessage(int robotId, String taskName, int valueLength, int[] values);
}
