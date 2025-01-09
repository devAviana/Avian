//
//  AIAbsAlgNode.h
//  SMG_NothingIsAll
//
//  Created by jia on 2018/12/7.
//  Copyright © 2018年 XiaoGang. All rights reserved.
//

#import "AIAlgNodeBase.h"

/**
 *  MARK:--------------------抽象概念节点--------------------
 *  1. absAlgNode的去重依赖index索引中的去重;
 *  2. value_p以后要再扩展支持values_p (如:一个圆形由微信息abcdefg组成)
 */
@interface AIAbsAlgNode : AIAlgNodeBase

@end
