def number_to_words(n):
    ones = ['','один','два','три','четыре','пять','шесть','семь','восемь','девять', 'десять']
    teens = ['','одиннадцать','двенадцать','тринадцать','четырнадцать','пятнадцать','шестнадцать','семнадцать','восемнадцать','девятнадцать']
    tens = ['','десять','двадцать','тридцать','сорок','пятьдесят','шестьдесят','семьдесят','восемьдесят','девяносто']
    hundreds = ['','сто','двести','триста','четыреста','пятьсот','шестьсот','семьсот','восемьсот','девятьсот']

    if n == 0:
        return 'ноль рублей'

    
    def helper(num):
        if num == 0:
            return ''
        elif num < 10:
            return ones[num]
        elif num < 20:
            return teens[num-10]
        elif num < 100:
            return tens[num//10] + ('' if num % 10 == 0 else ' ' + ones[num % 10])
        else:
            return hundreds[num//100] + ('' if num % 100 == 0 else ' ' + helper(num % 100))

    if n < 0 or n > 100000:
        return "Пожалуйста, введите число от 0 до 100000."


    thousands = ["одна", "тысяча", "тысячи", "тысяч"]
    words = helper(n % 1000)
    n //= 1000
    if n > 0:
        thousands_word = thousands[1] if n % 10 == 1 and n % 100 != 11 else (
            thousands[2] if 2 <= n % 10 <= 4 and (n % 100 < 10 or n % 100 >= 20) else thousands[3]
        )
        words = helper(n % 1000) + ' ' + thousands_word + ' ' + words

    return words + ' рублей'


number = int(input("Введите число от 1 до 100000: "))
print("Ваша сумма: ", number_to_words(number))