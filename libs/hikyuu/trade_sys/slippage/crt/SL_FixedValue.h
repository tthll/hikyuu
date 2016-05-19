/*
 * SL_FixedValue.h
 *
 *  Created on: 2016年5月7日
 *      Author: Administrator
 */

#ifndef TRADE_SYS_SLIPPAGE_CRT_SL_FIXEDVALUE_H_
#define TRADE_SYS_SLIPPAGE_CRT_SL_FIXEDVALUE_H_


#include "../SlippageBase.h"

namespace hku {

SlippagePtr HKU_API SL_FixedValue(double value = 0.01);

} /* namespace hku */


#endif /* TRADE_SYS_SLIPPAGE_CRT_SL_FIXEDVALUE_H_ */