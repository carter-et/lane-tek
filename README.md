# lane-tek
Bowling Lane simulation project by Ethan Carter and David Baas. Written in C++ 20.

# sources
## Bowling Lane Measurements
https://www.dlgsc.wa.gov.au/sport-and-recreation/sports-dimensions-guide/tenpin-bowling#:~:text=The%20length%20of%20a%20regulation,There%20are%2039%20boards.
## Lane Topograhy
https://www.bowlingthismonth.com/bowling-tips/a-primer-for-the-2019-usbc-open-championships/
## Oil Patterns
https://www.bowl.com/OilPatternBank/OpenChampionships/
## Physics of Ball and Lane Interaction
[A volumetric contact model to study the effect of lane friction and
the radii of gyration on the “hook shot” in indoor bowling, 2014, Joydeep Banerjee*, John McPhee](https://pdf.sciencedirectassets.com/278653/1-s2.0-S1877705814X00056/1-s2.0-S1877705814005918/main.pdf?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFwaCXVzLWVhc3QtMSJGMEQCIF6%2FuIYKerSdQjya2ss6JPzSPip3n1rmkqNau4jhtd9nAiApc9o30tzN1l9rWCkNQO5%2BGdfKoab4kvloZWfijmG5WSqDBAj1%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAQaDDA1OTAwMzU0Njg2NSIMWi7RfGJAnRwHvXWIKtcDn3lqkZEBjq5mHqYMo0BkHdjaUnWM1pUlpL4b2vys1xqJL29b4sS127ZYH3q%2FPmqrxjIk%2F6gFvnnMDIbAqvfpVGKxKj0kWxPaFXYz0yU2xzxERg24iKScYc1LrHnKIkN8ppS7XI2rudsmFsY2bV2t1KrnJFoF%2F8nbv7NwOEf%2BjnB9QvLDtp5uMLVVmFunFmJSXr5fxX0o47Zf5oBCWNIeLn7Nr6k3QmYh0jzBV01hHAnSX6brrCNE04AH%2Bksa0TY3RKbnbcddqq6XXuVGTCJqtgsIIq0uTepZYbTK%2BA51yjOQs5SfcNDgCwjG5VFShEA7iHJWGkpP%2Fi%2F6iHglAyI73ZAugjeEX1CUsOTIh5s6JixtcBJXxUJdPyiqzxY86e0nuP8nQbRcgIVNa06NeLm9loRL02e8fyt%2FHImGorZta11SP8nm9a48UXukgkZDUN6jPTcSLIYqXVCdUtsCrn588jMb8WTFfw7ai2LjxHoaAcTdUPEvao3PBP45d7uXjOZBv2O5r74P4fJrsBK70eQQt0W50ymX4Lp0LVe0Wmw%2FFXyVFauoVutIUtyW7OUnVtcPgNnSgWHzLS955BabbEInada9T%2F3IM8U6Psv8Uh5G%2FMLKu1g9AH9wMOzCx5IGOqYBzp%2FA8CHQF7%2FklNOQA4BuMlIxPzWDQVE%2BhdThFjahVhbTwT%2FDtVD7xQmKYeNY34pSFNG%2BKgSXhlNQLj3AFtG3noeYE%2FzjagQgxBvFA7%2Fbn%2FNF7nWhh2FOIHtMLgzrThsIaqstdwRV%2Bcjo14evjQ7K535P2tuHqvBIRQ4KBIjadsKR3cspRWFHPCQQANQGhowTQQmlODZzaB%2BYYe8LKr3JaxKlly7y3A%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20220409T210947Z&X-Amz-SignedHeaders=host&X-Amz-Expires=300&X-Amz-Credential=ASIAQ3PHCVTYU3ZVOKNB%2F20220409%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Signature=65adbc890f04daf063209169632728ea338bf437df5cf0439d6198bf2ca0c554&hash=e4b8112889787288f99c9668a648c7857453e6467b2f3dce1b4ab5105f89accd&host=68042c943591013ac2b2430a89b270f6af2c76d8dfd086a07176afe7c76c2c61&pii=S1877705814005918&tid=spdf-1bc97f9e-1857-42f8-9ad5-27f607dddcd0&sid=414cc3fd8a4d8647203ac90-263d5c866543gxrqa&type=client)

# Design
## Represent the bowling lane
Use metic 
Represent the lane as a sereis of points in a cartiesian plane. 

struct Point:
    x
    y
    oil level (micro litires)
Oil level will be used to mesture the amount of friction force applied the lane. 
https://sciencing.com/calculate-force-friction-6454395.html
