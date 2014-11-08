/*
 * ActionBasedTransaction.cpp
 *
 *  Created on: 2014��11��8��
 *      Author: Thoughtworks
 */

#include "Transaction/ActionBasedTransaction.h"
#include "SchedAction/SchedAction.h"

Status ActionBasedTransaction::start()
{
	return ROLE(SchedAction).exec();
}

Status ActionBasedTransaction::handleEvent(const Event& event)
{
	return ROLE(SchedAction).handleEvent(event);
}


