def show_messages(lis):
    """打印列表中的一系列内容"""
    if lis:
        for item in lis:
            print(item)
    else:
        print(f'none')
def send_messages(lis):
    """打印消息并移到一个名为sent_messages的列表中"""
    send_messages=[]
    show_messages(lis)
    while lis:
        send_messages.append(lis.pop())
    return send_messages


## 调用函数
list_news=['hello world','This is Ttzs','hello python']
show_messages(list_news)
send=send_messages(list_news[:])
show_messages(list_news)
show_messages(send)
    