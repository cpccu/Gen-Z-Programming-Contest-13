n, k = map(int, input().strip().split())

scores = list(map(int, input().strip().split()))

kth_score = scores[k - 1]  # k-1 because of 0-based indexing

count = sum(1 for score in scores if score >= kth_score and score > 0)

print(count)
