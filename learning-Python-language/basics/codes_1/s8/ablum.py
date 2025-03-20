def make_album(singer,ablum=None):
    """返回包含歌手和专辑的字典"""
    return {'singer':singer,'ablum':ablum}

album=make_album('zjl',['最好的作品','青花瓷'])
print(album)
