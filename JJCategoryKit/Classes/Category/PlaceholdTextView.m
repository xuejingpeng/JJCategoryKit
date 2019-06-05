//
//  PlaceholdTextView.m
//  textViewPlacehold
//
//  Created by TongLi on 16/9/26.
//  Copyright © 2016年 TongLi. All rights reserved.
//

#import "PlaceholdTextView.h"
@interface PlaceholdTextView ()<UITextViewDelegate>

@end
@implementation PlaceholdTextView

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        [self addPlacehold];
    }
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self addPlacehold];
        
    }
    return self;
}
//添加显示Placehold的UILabel
- (void)addPlacehold {
    //创建显示Placehold的UILabel
    self.holdLabel = [[UILabel alloc]initWithFrame:CGRectMake(4, 0, 200, 30)];
    self.holdLabel.font = self.font;
    self.holdLabel.textColor = [UIColor colorWithRed:200/255.0 green:200/255.0 blue:205/255.0 alpha:1];
    [self addSubview:self.holdLabel];
    
    
}

//代理方法，最重要的
- (void)textViewDidChange:(UITextView *)textView {
    //如果没有文字就让其显示placehold，也有文字就不让其显示
    if (textView.text.length == 0) {
        self.holdLabel.text = self.textViewPlacehold;
    }else{
        if ([self.text isEqualToString:@"\n"]) {
            self.text =[self.text stringByReplacingOccurrencesOfString:@"\n" withString:@""];
        }
        else if ([self.text isEqualToString:@" "]){
            self.text =[self.text stringByReplacingOccurrencesOfString:@" " withString:@""];
        }
        self.holdLabel.text = @"";
    }

}

- (void)drawRect:(CGRect)rect {
    // Drawing code
    self.holdLabel.text = self.textViewPlacehold;
    [self textViewDidChange:self];
    if (self.isAddDelegate == YES) {
        self.delegate = self;
    }

}


@end
