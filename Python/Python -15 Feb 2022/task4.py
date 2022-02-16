def weapon_assigner(data):
    arr = []

    if data['height'] > 180 and data['weight'] < 75:
         arr.append([data['name'],'SVD'])

    elif data['height'] > 180 and (data['weight'] > 75 and data['weight'] < 120):
        arr.append([data['name'],'PK'])

    elif (data['height'] > 165 and data['heigth'] < 180) and (data['weight'] > 60 and data['weight'] < 75):
         arr.append([data['name'],'RPK-74'])

    else:
        arr.append([data['name'],'AK-74'])
    print(arr)

weapon_assigner({'name': 'Petros Poghosyan',
                'height': 189,
                'weight': 80})   
