package de.uniluebeck.itm.icontrol.communication.listener;

public interface FeatureListener {
	public void onAction(int robotId, int taskListLength, String[] taskList, int[] paramListLength, String[][] paramList);
}
