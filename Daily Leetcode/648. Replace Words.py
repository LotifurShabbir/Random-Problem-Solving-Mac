class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        s = set()
        for i in dictionary:
            s.add(i)
        sentence = sentence.split(" ")
        # print(sentence)

        ans = ""

        for chinguu in sentence:
            temp = ""
            for i in chinguu:
                temp += i
                if temp in s:
                    break
            ans += " " + temp

        final_ans = ans[1::]
        return final_ans