class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        answer = [0] * len(score)
        k, place = 0, 1
        while k != len(score):
            idx = score.index(max(score))
            # print(idx)
            if place == 1:
                answer[idx] = "Gold Medal"
                score[idx] = -99
                place += 1
            elif place == 2:
                answer[idx] = "Silver Medal"
                place += 1
                score[idx] = -99
            elif place == 3:
                answer[idx] = "Bronze Medal"
                place += 1
                score[idx] = -99
            else:
                answer[idx] = str(place)
                place += 1
                score[idx] = -99
            
            k += 1
        return answer
