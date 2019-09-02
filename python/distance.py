  
def distances(S, C): 
    distances = []
    for i,l in enumerate(S):
        index = 0
        buffer = ""
        for c in S[i:]:
            buffer += c
            index += 1
        print(index)
    return distances

print(distances("loveleetcode", 'e'))
