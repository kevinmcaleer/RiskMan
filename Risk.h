//
//  Risk.h
//  RiskMan
//
//  Created by Kevin McAleer on 31/10/2009.
//  Copyright 2009 Stoneage Software Ltd. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Risk :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSNumber * Category;
@property (nonatomic, retain) NSManagedObject * Cat;

@end



