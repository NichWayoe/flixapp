//
//  MovieCell.h
//  WatchFlix
//
//  Created by Nicholas Wayoe on 6/24/20.
//  Copyright © 2020 Nicholas Wayoe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;

@end

