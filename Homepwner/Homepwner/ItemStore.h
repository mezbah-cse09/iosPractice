//
//  ItemStore.h
//  Homepwner
//
//  Created by wayne on 14-3-24.
//  Copyright (c) 2014年 wayne. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Item;

@interface ItemStore : NSObject
@property (nonatomic,readonly) NSArray *allItems;
@property (nonatomic,strong) NSMutableArray *allAssets;

-(Item *)addStoreItem;
-(void)removeStoreItem:(Item *)item;
-(void)moveItemPositon:(NSUInteger)from to:(NSUInteger)to;
+(instancetype)sharedStore;
-(BOOL)saveChange;
@end
